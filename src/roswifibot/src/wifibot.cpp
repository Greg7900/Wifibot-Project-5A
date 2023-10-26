#include "lib_wifibot/libwifibot.h"
#include "wifibot.h"


#define TWOPI (M_PI * 2)

Wifibot::Wifibot() : Node("wifibot_node"),

    _updated(false),
    _speedLeft(0.0),
    _speedRight(0.0)
{
  
  this->declare_parameter("port", "/dev/ttyUSB0");
  this->declare_parameter("base_frame", "base_frame");
  this->declare_parameter("odom_frame", "odom");
  this->declare_parameter("entrax", 0.39);
  this->declare_parameter("relay1", true);
  this->declare_parameter("relay2", true);
  this->declare_parameter("relay3", true);
  this->declare_parameter("battery_min_voltage", 10.5);
  this->declare_parameter("battery_max_voltage", 12.1);
  
  

 



  //rclcpp::NodeHandle pn("~");
  
  // Get device port parameter
  std::string dev;
  
  if (!this->get_parameter("port", dev))
  {
    dev = "/dev/ttyS0";
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"No device port set. Assuming : %s", dev.c_str());
  }

   
  // get base frame parameter
  std::string frameBase;
  if (!this->get_parameter("base_frame", frameBase))
    _frameBase = "base_frame";
  else
    _frameBase = frameBase;
  _frameOdom = "odom";
  this->set_parameter(rclcpp::Parameter("odom_frame", _frameOdom));


  // get entrax parameter
  double entrax;
  if (!this->get_parameter("entrax", entrax))
    _entrax = 0.30;
  else
    _entrax = entrax;
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Wifibot entrax : %0.3f", _entrax);

  bool relay1, relay2, relay3;
  // set relays
  this->set_parameter(rclcpp::Parameter("relay1", true));
  this->set_parameter(rclcpp::Parameter("relay2", true));
  this->set_parameter(rclcpp::Parameter("relay3", true));
  this->set_parameter(rclcpp::Parameter("battery_min_voltage", 10.5));
  this->set_parameter(rclcpp::Parameter("battery_max_voltage", 12.1));

 

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"Wifibot device : %s. Entrax : %0.3f, relay1:%i, relay2:%i, relay3:%i",
           dev.c_str(), _entrax, relay1, relay2, relay3);

  // Create and configure the driver
  _pDriver = new wifibot::Driver(dev);
  _pDriver->setRelays(relay1, relay2, relay3);
  _pDriver->loopControlSpeed(0.01);  // Default loop control speed
  _pDriver->setPid(0.8, 0.45, 0.0);  // Default PID values
  _pDriver->setTicsPerMeter(5312.0); // Adapt this value according your wheels size

  // Save initial position
  wifibot::driverData st = _pDriver->readData();
  _odometryLeftLast = st.odometryLeft;
  _odometryRightLast = st.odometryRight;

  _position.x = 0;
  _position.y = 0;
  _position.th = 0;

  // Create topics
 
  auto _pubOdometry = this->create_publisher<nav_msgs::msg::Odometry>("odom", 1);
  auto _pubStatus = this->create_publisher<wifibot_msgs::msg::Status>("status", 1);
  auto _pubRobotBatteryVoltage = this->create_publisher<std_msgs::msg::Float32>("robot_battery_voltage", 1);
  auto _pubComputerBatteryVoltage = this->create_publisher<std_msgs::msg::Float32>("computer_battery_voltage", 1);
  auto _pubIsCharging = this->create_publisher<std_msgs::msg::Bool>("is_charging", 1);
  
  auto _subSpeeds = 0;//this->create_subscription<geometry_msgs::msg::Twist>("cmd_vel",1,&Wifibot::velocityCallback,this);
  _timeCurrent = rclcpp::Clock().now();
  _timeLast = rclcpp::Clock().now();
}

Wifibot::~Wifibot()
{
  delete _pDriver;
}

double Wifibot::getSpeedLinear(double left, double right)
{
  return (right + left) / 2.0;
}

double Wifibot::getSpeedAngular(double left, double right)
{
  return (right - left) / _entrax;
}

void Wifibot::computeOdometry(double left, double right)
{
  double dleft = left - _odometryLeftLast;
  double dright = right - _odometryRightLast;

  double distance = getSpeedLinear(dleft, dright);

  _position.th += getSpeedAngular(dleft, dright);
  _position.th -= (float)((int)(_position.th / TWOPI)) * TWOPI;

  _position.x += distance * cos(_position.th);
  _position.y += distance * sin(_position.th);

  _odometryLeftLast = left;
  _odometryRightLast = right;
}

void Wifibot::velocityCallback(const geometry_msgs::msg::Twist& vel)
{
  //ROS_INFO("input : %0.3f | %0.3f", vel->linear.x, vel->angular.z);

  _speedLeft = vel.linear.x - (vel.angular.z * (_entrax / 2.0));
  _speedRight =  vel.linear.x + (vel.angular.z * (_entrax / 2.0));
  _updated = true;
}

void Wifibot::update()
{
  wifibot_msgs::msg::Status topicStatus;

  // Send speeds only if needed
  if (_updated)
    _pDriver->setSpeeds(_speedLeft, _speedRight);
  _updated = false;

  // get data from driver
  wifibot::driverData st = _pDriver->readData();

  _timeCurrent = rclcpp::Clock().now();

  // Fill status topic
  topicStatus.battery_level = st.voltage;
  topicStatus.current = st.current; // see libwifibot to adapt this value
  topicStatus.adc1 = st.adc[0];
  topicStatus.adc2 = st.adc[1];
  topicStatus.adc3 = st.adc[2];
  topicStatus.adc4 = st.adc[3];

  topicStatus.speed_front_left = st.speedFrontLeft;
  topicStatus.speed_front_right = st.speedFrontRight;

  topicStatus.odometry_left = st.odometryLeft;
  topicStatus.odometry_right = st.odometryRight;
  topicStatus.version = st.version;
  bool r1, r2, r3;
  _pDriver->getRelays(r1, r2, r3);
  topicStatus.relay1 = r1;
  topicStatus.relay2 = r2;
  topicStatus.relay3 = r3;

  // publish status
  if (_pubStatus->get_subscription_count())
    _pubStatus->publish(topicStatus);

  // compute position
  computeOdometry(st.odometryLeft, st.odometryRight);

  //TRANSFORM we'll publish the transform over tf
  _odomTf.header.stamp = _timeCurrent;
  _odomTf.header.frame_id = _frameOdom;
  _odomTf.child_frame_id = _frameBase;

  _odomTf.transform.translation.x = _position.x;
  _odomTf.transform.translation.y = _position.y;
  _odomTf.transform.translation.z = 0.0;
  _odomTf.transform.rotation = createQuaternionMsgFromYaw(_position.th);

  //send the transform
  _odomBroadcast->sendTransform(_odomTf);


  //TOPIC, we'll publish the odometry message over ROS
  nav_msgs::msg::Odometry odometryTopic;
  odometryTopic.header.stamp = _timeCurrent;
  odometryTopic.header.frame_id = _frameOdom;

  //set the position
  odometryTopic.pose.pose.position.x = _position.x;
  odometryTopic.pose.pose.position.y = _position.y;
  odometryTopic.pose.pose.position.z = 0.0;
  odometryTopic.pose.pose.orientation =createQuaternionMsgFromYaw(_position.th);

  //set the velocity
  odometryTopic.child_frame_id = _frameBase;
  odometryTopic.twist.twist.linear.x = getSpeedLinear(
        st.speedFrontLeft, st.speedFrontRight);
  odometryTopic.twist.twist.linear.y = 0.0;
  odometryTopic.twist.twist.angular.z = getSpeedAngular(
        st.speedFrontLeft, st.speedFrontRight);

  /*
  ROS_INFO("lin:%0.3f ang:%0.3f",
     odometryTopic.twist.twist.linear.x,
     odometryTopic.twist.twist.angular.z);
  */

  //publish the message
  if (_pubOdometry->get_subscription_count())
    _pubOdometry->publish(odometryTopic);

  // BATTERIES
  std_msgs::msg::Float32 batt_voltage;
  batt_voltage.data = st.voltage;
  if (_batteryMinVoltage > st.voltage) {
    this->set_parameter(rclcpp::Parameter("robot_battery_min_voltage", st.voltage));
    this->set_parameter(rclcpp::Parameter("computer_battery_min_voltage", st.voltage));
    _batteryMinVoltage = st.voltage;
  }
  /* when plugged, battery level ~= 17.5, otherwise 12.5 -> 10
  else if (_batteryMaxVoltage < st.voltage) {
    this->setParam("robot_battery_max_voltage", st.voltage);
    this->setParam("computer_battery_max_voltage", st.voltage);
    _batteryMaxVoltage = st.voltage;
  }
  * */
  if (_pubRobotBatteryVoltage->get_subscription_count())
    _pubRobotBatteryVoltage->publish(batt_voltage);
  if (_pubComputerBatteryVoltage->get_subscription_count())
    _pubComputerBatteryVoltage->publish(batt_voltage);
  //std_msgs::Bool is_charging_msg;
  //is_charging_msg.data = (st.voltage > 15);
  //if (_pubIsCharging.getNumSubscribers())
  //  _pubIsCharging.publish(is_charging_msg);

  // Update last time
  _timeLast = _timeCurrent;
}

int main (int argc, char **argv) {
  //std::shared_ptr<tf2_ros::TransformBroadcaster> _odomBroadcast;
  rclcpp::init(argc, argv); //, "wifibot_node"
  
  Wifibot robot;
  
  rclcpp::Rate r(100);
  while (rclcpp::ok()) {
    rclcpp::spin_some(std::make_shared<Wifibot>());
    robot.update();
    r.sleep();
  }
  return 0;
}
