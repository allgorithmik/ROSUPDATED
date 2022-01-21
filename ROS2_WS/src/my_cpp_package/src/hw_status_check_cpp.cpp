#include "rclcpp/rclcpp.hpp"
#include "my_interface_pkg/msg/hardware_status.hpp"

class HardwareStatusPublisher : public rclcpp::Node{
    public:
        HardwareStatusPublisher() : Node("hadware_publisher"){
            pub_ = this->create_publisher<my_interface_pkg::msg::HardwareStatus>("hardware_status", 10);
            timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&HardwareStatusPublisher::publishHardwareStatus, this));
            RCLCPP_INFO(this->get_logger(), "Hardware Stats Publisher is running from CPP Node!");
        }

    private:
            void publishHardwareStatus(){
                auto msg = my_interface_pkg::msg::HardwareStatus();
                msg.temperature = 50;
                msg.are_motors_ready = true;
                msg.debug_message = "Motors voltage is high!";
                pub_->publish(msg);
            }

            rclcpp::Publisher<my_interface_pkg::msg::HardwareStatus>::SharedPtr pub_;
            rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<HardwareStatusPublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

