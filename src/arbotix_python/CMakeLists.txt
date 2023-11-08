cmake_minimum_required(VERSION 3.5)
project(arbotix_python)

find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(tf2_ros REQUIRED)



install(DIRECTORY demos
  DESTINATION share/${PROJECT_NAME}/
)

install(PROGRAMS bin/arbotix_driver
  DESTINATION bin/${PROJECT_NAME}/
)
ament_package()