cmake_minimum_required(VERSION 3.5)
project(arbotix_sensors)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
ament_package()


install(PROGRAMS bin/ir_ranger.py bin/max_sonar.py
  DESTINATION bin/${PROJECT_NAME}/
)
