#include <rclcpp/rclcpp.hpp>

class MapCleanerNode : public rclcpp::Node
{
public:
  MapCleanerNode() : Node("map_cleaner_node")
  {
    RCLCPP_INFO(this->get_logger(), "agt_pointcloud_map_tools initialized");
  }
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MapCleanerNode>());
  rclcpp::shutdown();
  return 0;
}
