cmake_minimum_required(VERSION 3.8)
project(agt_pointcloud_map_tools)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(pcl_conversions REQUIRED)
find_package(PCL REQUIRED)

include_directories(include)

add_executable(map_cleaner_node src/map_cleaner_node.cpp)
ament_target_dependencies(map_cleaner_node rclcpp sensor_msgs pcl_conversions)
target_link_libraries(map_cleaner_node ${PCL_LIBRARIES})

install(TARGETS
  map_cleaner_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  config
  launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
