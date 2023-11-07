cmake_minimum_required(VERSION 3.5)
project(arbotix_controllers)
set(CMAKE_CXX_STANDARD 14)
find_package(ament_cmake  REQUIRED)


install(
  PROGRAMS
    bin/gripper_controller
    bin/one_side_gripper_controller.py
    bin/parallel_gripper_controller.py
    bin/parallel_single_servo_controller.py
  DESTINATION bin/${PROJECT_NAME}
)
ament_package()