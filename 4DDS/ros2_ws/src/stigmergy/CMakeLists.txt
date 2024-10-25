cmake_minimum_required(VERSION 3.8)
project(stigmergy)

# Imposta il linguaggio C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Opzioni di compilazione
add_compile_options(-Wall -Wextra -Wpedantic)

# Trova i pacchetti necessari
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Aggiungi la directory dei messaggi
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/PheromoneGradient.msg"
  DEPENDENCIES std_msgs
)

# Includi la cartella include/
include_directories(include)

# Aggiungi l'eseguibile
add_executable(stigmergy_map src/main.cpp src/StigmergyMap.cpp)
ament_target_dependencies(stigmergy_map rclcpp geometry_msgs std_msgs Eigen3)

# Aggiungi dipendenze per i messaggi
rosidl_target_interfaces(stigmergy_map
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

# Installa l'eseguibile
install(TARGETS stigmergy_map
  DESTINATION lib/${PROJECT_NAME})

# Installa i file di include
install(DIRECTORY include/
  DESTINATION include/
)

ament_package()
