cmake_minimum_required(VERSION 3.8)
project(stigmergy)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-Wall -Wextra --pedantic -Wno-uninitialized -Wno-unused-parameter -Wno-catch-value -O2 -Wno-comment -std=c++17)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(eigen3_cmake_module REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(stigmergy REQUIRED)
find_package(boids REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME} "msg/PheromoneGradient.msg")

add_executable(stigmergy_map src/StigmergyMap.cpp src/yaml.cpp src/main.cpp)
ament_target_dependencies(stigmergy_map rclcpp eigen3_cmake_module Eigen3 boids stigmergy)
install(TARGETS stigmergy_map DESTINATION lib/${PROJECT_NAME})


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
