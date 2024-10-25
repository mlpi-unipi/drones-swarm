cmake_minimum_required(VERSION 3.8)
project(drone)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-Wall -Wextra --pedantic -Wno-uninitialized -Wno-unused-parameter -Wno-catch-value -O2 -Wno-comment -std=c++17)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(eigen3_cmake_module REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(px4_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(OpenCV REQUIRED)
find_package(obstacle_avoidance REQUIRED)
find_package(target_detection REQUIRED)
find_package(parameters REQUIRED)
find_package(fdds_messages)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(Drone src/Drone.cpp src/main.cpp)
ament_target_dependencies(Drone Eigen3 px4_msgs rclcpp sensor_msgs OpenCV obstacle_avoidance target_detection parameters fdds_messages)
target_include_directories(Drone PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(Drone PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

install(TARGETS Drone
  DESTINATION lib/${PROJECT_NAME})

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

ament_package()
