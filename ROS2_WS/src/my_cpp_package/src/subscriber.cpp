#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

class SubscriberNode : public rclcpp::Node{
    public:
    SubscriberNode() : Node("Subscriber_Node"){
        subscriber_ = this->create_subscription<example_interfaces::msg::String>("publisher_node", 10, std::bind(&SubscriberNode::callbackSubscriber, this, std::placeholders::_1));
        RCLCPP_INFO(this->get_logger(), "Subscriber node has started");

    }
    private:
    void callbackSubscriber(const example_interfaces::msg::String::SharedPtr msg){
        RCLCPP_INFO(this->get_logger(), "%s", msg->data.c_str());
    }

    rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_;
};

int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SubscriberNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}