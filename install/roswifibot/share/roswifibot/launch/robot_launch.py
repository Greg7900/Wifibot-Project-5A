from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution


def generate_launch_description():

    roswifibot_cfg_path = PathJoinSubstitution(
        [FindPackageShare("roswifibot"), "config", "wifibot.yaml"]
    )

    roswifibot_params_file_argument = DeclareLaunchArgument(
        "roswifibot_params_file",
        default_value=roswifibot_cfg_path,
        description="ROS2 parameters file to use with roswifibot node",
    )

    roswifibot_node = Node(
        package="roswifibot",
        executable="roswifibot_node",
        parameters=[LaunchConfiguration("roswifibot_params_file")],
        output="screen",
        emulate_tty="true",
    )

    actions = [roswifibot_params_file_argument, roswifibot_node]

    return LaunchDescription(actions)
