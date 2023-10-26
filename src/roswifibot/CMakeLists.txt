### 1 - Required CMake Version
cmake_minimum_required(VERSION 3.5)
### 2- Package Name
project(roswifibot)

set(CMAKE_CXX_STANDARD 14)

### 3 - Find other CMake/Catkin packages needed for build

find_package(ament_cmake  REQUIRED)
find_package(rclcpp REQUIRED)

find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(wifibot_msgs REQUIRED)
find_package(lib_wifibot REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)

### 4 - Message/Service/Action Generators (add_message_files(), add_service_files(), add_action_files())
### add_message_files(DIRECTORY msg FILES Status.msg )

### 5 - Invoke message/service/action generation (rosidl_generate_interfaces())
# rosidl_generate_interfaces(${PROJECT_NAME}
#   "msg/Status.msg")
### 6 - Specify package build info export (catkin_package())


ament_export_dependencies(
  rclcpp
  std_msgs
  tf2
  tf2_ros
  nav_msgs
  geometry_msgs
  tf2_geometry_msgs
  rosidl_default_runtime
  # message_generation
)

ament_export_include_directories(
  include
)

### 7 - Libraries/Executables to build (add_library()/add_executable()/target_link_libraries())
include_directories(
  include
  ${rclcpp_INCLUDE_DIRS}
)

include_directories(include ${Boost_INCLUDE_DIRS})

add_executable(${PROJECT_NAME}_node          src/wifibot.cpp)

ament_target_dependencies(
    ${PROJECT_NAME}_node
    ament_cmake
    ament_index_cpp
    rclcpp
    std_msgs
    tf2
    tf2_ros
    nav_msgs
    wifibot_msgs
    lib_wifibot
    geometry_msgs
    tf2_geometry_msgs
)
install(TARGETS ${PROJECT_NAME}_node 
  DESTINATION lib/${PROJECT_NAME}
)
install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}/
)
ament_package()
