cmake_minimum_required(VERSION 3.8)
project(arbotix_msgs)

set(CMAKE_CXX_STANDARD 14)

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

set(MSG_FILES
    msg/Analog.msg
    msg/Digital.msg
)
set(SRV_FILES
    srv/Enable.srv
    srv/Relax.srv
    srv/SetupChannel.srv
    srv/SetSpeed.srv
)
rosidl_generate_interfaces(${PROJECT_NAME}
  ${MSG_FILES}
  ${SRV_FILES}
  DEPENDENCIES  std_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
