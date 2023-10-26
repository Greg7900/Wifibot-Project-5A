cmake_minimum_required(VERSION 3.8)
project(lib_wifibot)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

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


# let the compiler know that we have some headers in the include folder
include_directories(include)

#define a library target called libwifibot
add_library(lib_wifibot src/libwifibot.cpp)

#this line to export the library so that other packages can link to it
ament_export_targets(lib_wifibot HAS_LIBRARY_TARGET)

#install the include/libwifibot to the install/include/libwifibot
install(DIRECTORY include/lib_wifibot
  DESTINATION include
)
install(
  TARGETS lib_wifibot
  EXPORT  lib_wifibot
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)
find_package(rosidl_default_generators REQUIRED)
ament_package()
