#include "rclcpp/rclcpp.hpp"

#include "example_interfaces/srv/add_two_ints.hpp"

class AddTwoIntsClientNode : public rclcpp::Node{
    public:
    AddTwoIntsClientNode() : Node("add_two_ints_client_node"){
        /*addTwoIntService(10, 15);*/
        threads_.push_back(std::thread(std::bind(&AddTwoIntsClientNode::addTwoIntService, this, 10, 15)));
        threads_.push_back(std::thread(std::bind(&AddTwoIntsClientNode::addTwoIntService, this, 100, 15)));
        threads_.push_back(std::thread(std::bind(&AddTwoIntsClientNode::addTwoIntService, this, 1000, 15)));
    }

    void addTwoIntService(int a, int b){
        auto client = this->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
        while (!client->wait_for_service(std::chrono::seconds(1))){
            RCLCPP_WARN(this->get_logger(), "Waiting for server to be started!");
        }

        auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
        request->a = a;
        request->b = b;

        auto future = client->async_send_request(request);

        try{
            auto response = future.get();
            RCLCPP_INFO(this->get_logger(), "The result is %d + %d  = %d", a, b, response->sum);
        }
        catch(const std::exception &e){
            RCLCPP_ERROR(this->get_logger(), "Service call failed here!");
        }
        
    }
    private:
        std::vector<std::thread> threads_;
};

int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AddTwoIntsClientNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}