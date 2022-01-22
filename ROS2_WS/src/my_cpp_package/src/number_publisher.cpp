#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"

class NumberPublisherNode : public rclcpp::Node{
    public:
        NumberPublisherNode() : Node("Number_Publisher_CPP"){
            this->declare_parameter("number_to_publish", 10);
            this->declare_parameter("publish_frequency", 1.0);

            number_ = this->get_parameter("number_to_publish").as_int();
            double frequency_ = this->get_parameter("publish_frequency").as_double();
            number_publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number", 10);
            number_timer_ = this->create_wall_timer(std::chrono::milliseconds((int) (1000.0 / frequency_)), std::bind(&NumberPublisherNode::publishNumber, this));
            RCLCPP_INFO(this->get_logger(), "CPP Number Publisher Node has been started");
        }
    private:
        void publishNumber(){
            auto msg = example_interfaces::msg::Int64();
            msg.data = number_;
            number_publisher_->publish(msg);
        }

    int number_;
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr number_publisher_;
    rclcpp::TimerBase::SharedPtr number_timer_;
};

int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberPublisherNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}