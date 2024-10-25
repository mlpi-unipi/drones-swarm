cmake_minimum_required(VERSION 3.8)
project(obstacle_avoidance)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-Wall -Wextra --pedantic -Wno-uninitialized -Wno-unused-parameter -Wno-catch-value -O2 -Wno-comment -std=c++17)

if(VFH_AVOIDANCE)
  add_compile_definitions(VFH_AVOIDANCE)
else()
  unset(VFH_AVOIDANCE CACHE)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(parameters REQUIRED)
find_package(rclcpp REQUIRED)
find_package(eigen3_cmake_module REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(image_transport REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_library(ObstacleAvoidance src/ObstacleAvoidance.cpp)
ament_target_dependencies(ObstacleAvoidance sensor_msgs parameters rclcpp Eigen3 image_transport)
target_include_directories(ObstacleAvoidance PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(ObstacleAvoidance PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17

ament_export_include_directories(include)
ament_export_libraries(ObstacleAvoidance)

# Install header files
install(DIRECTORY include/${PROJECT_NAME}/ DESTINATION include/${PROJECT_NAME})

install(TARGETS ObstacleAvoidance
	ARCHIVE DESTINATION lib
	LIBRARY DESTINATION lib
	RUNTIME DESTINATION bin
	INCLUDES DESTINATION include
)

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
