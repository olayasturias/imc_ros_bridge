/* Copyright 2019 The SMaRC project (https://smarc.se/)
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "rclcpp/rclcpp.hpp"
#include <iostream>


#include <imc_ros_bridge/imc_ros_bridge_server.hpp>

#include <imc_ros_bridge/ros_to_imc/Heartbeat.h>
#include <imc_ros_bridge/ros_to_imc/GpsFix.h>
#include <imc_ros_bridge/ros_to_imc/Goto.h>
#include <imc_ros_bridge/ros_to_imc/GpsNavData.h>
#include <imc_ros_bridge/ros_to_imc/EstimatedState.hpp>
#include <imc_ros_bridge/ros_to_imc/PlanControlState.h>
#include <imc_ros_bridge/ros_to_imc/VehicleState.hpp>
#include <imc_ros_bridge/ros_to_imc/RemoteState.hpp>
#include <imc_ros_bridge/ros_to_imc/SonarData.hpp>
#include <imc_ros_bridge/ros_to_imc/DesiredHeading.hpp>
#include <imc_ros_bridge/ros_to_imc/DesiredHeadingRate.hpp>
#include <imc_ros_bridge/ros_to_imc/DesiredPitch.h>
#include <imc_ros_bridge/ros_to_imc/DesiredRoll.h>
#include <imc_ros_bridge/ros_to_imc/DesiredSpeed.hpp>
#include <imc_ros_bridge/ros_to_imc/DesiredZ.hpp>
#include <imc_ros_bridge/ros_to_imc/PlanDB.hpp>

#include <imc_ros_bridge/imc_to_ros/Goto.h>
#include <imc_ros_bridge/imc_to_ros/Heartbeat.h>
#include <imc_ros_bridge/imc_to_ros/Abort.h>
#include <imc_ros_bridge/imc_to_ros/PlanDB.hpp>
#include <imc_ros_bridge/imc_to_ros/PlanControl.h>

using namespace std;

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    
    auto ros_node = std::make_shared<rclcpp::Node>("imc_ros_bridge");

    std::string neptus_addr;
    std::string bridge_tcp_addr;
    std::string bridge_tcp_port;
    std::string sys_name;
    int imc_id;
	int imc_src;
    // read ros2 launch variables

    // rclcpp::Parameter neptus_addr_param("~neptus_addr", neptus_addr);
    ros_node->declare_parameter("neptus_addr", "0.0.0.0");
    neptus_addr = ros_node->get_parameter("neptus_addr").as_string();
    ros_node->declare_parameter("bridge_addr", "0.0.0.0");
    bridge_tcp_addr = ros_node->get_parameter("bridge_addr").as_string();
    ros_node->declare_parameter("bridge_port", "6002");
    bridge_tcp_port = ros_node->get_parameter("bridge_port").as_string();
    ros_node->declare_parameter("system_name", "imc_ros_bridge");
    sys_name = ros_node->get_parameter("system_name").as_string();

	// Neptus seems to have swapped these values for SOME REASON. so I swap here too...
	// tldr: imc_id is the vehicle TYPE and imc_src is the SPECIFIC VEHICLE
    ros_node->declare_parameter("imc_src", 150);
    imc_src = ros_node->get_parameter("imc_src").as_int();
    ros_node->declare_parameter("imc_id", 450);
    imc_id = ros_node->get_parameter("imc_id").as_int();

    IMCHandle imc_handle(bridge_tcp_addr, bridge_tcp_port, neptus_addr, sys_name, imc_id, imc_src);
    RCLCPP_INFO(ros_node->get_logger(), "created imc handle");
    //ros_to_imc::BridgeServer<std_msgs::msg::Empty, IMC::Heartbeat> heartbeat_server(imc_handle, "heartbeat");
    // ros_to_imc::BridgeServer<sensor_msgs::msg::NavSatFix, IMC::GpsFix> gpsfix_server(imc_handle, "gps_fix");
    // ros_to_imc::BridgeServer<geometry_msgs::msg::Pose, IMC::Goto> goto_server_dummy(imc_handle, "goto_input");
    // ros_to_imc::BridgeServer<sensor_msgs::msg::NavSatFix, IMC::GpsNavData> gpsnavdata_server(imc_handle, "gps_nav_data");
    RCLCPP_INFO(ros_node->get_logger(), "created servers");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::EstimatedState, IMC::EstimatedState> estimatedstate_server(imc_handle, "estimated_state");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::PlanControlState, IMC::PlanControlState> plancontrolstate_server(imc_handle, "plan_control_state");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::VehicleState, IMC::VehicleState> vehiclestate_server(imc_handle, "vehicle_state");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::RemoteState, IMC::RemoteState> RemoteState_server(imc_handle, "remote_state");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::SonarData, IMC::SonarData> sonar_server(imc_handle, "sonar_data");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::DesiredHeading, IMC::DesiredHeading> DesiredHeading_server(imc_handle, "desired_heading");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::DesiredHeadingRate, IMC::DesiredHeadingRate> DesiredHeadingRate_server(imc_handle, "desired_heading_rate");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::DesiredPitch, IMC::DesiredPitch> DesiredPitch_server(imc_handle, "desired_pitch");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::DesiredRoll, IMC::DesiredRoll> DesiredRoll_server(imc_handle, "desired_roll");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::DesiredSpeed, IMC::DesiredSpeed> DesiredSpeed_server(imc_handle, "desired_speed");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::DesiredZ, IMC::DesiredZ> DesiredZ_server(imc_handle, "desired_z");
    // ros_to_imc::BridgeServer<imc_ros_msgs::msg::PlanDB, IMC::PlanDB> to_imc_plandb_server(imc_handle, "plan_db");
    // RCLCPP_INFO(ros_node->get_logger(), "created servers2");
    // // 450
    // imc_to_ros::BridgeServer<IMC::Goto, geometry_msgs::msg::Pose> goto_server(imc_handle,"goto_waypoint");
    // // 150
    imc_to_ros::BridgeServer<IMC::Heartbeat, std_msgs::msg::Empty> imc_heartbeat_server(imc_handle, "imc_heartbeat");
    // 550
    // imc_to_ros::BridgeServer<IMC::Abort, std_msgs::msg::Empty> abort_server(imc_handle,  "abort");
    // // 556
    // imc_to_ros::BridgeServer<IMC::PlanDB, imc_ros_msgs::msg::PlanDB> plandb_server(imc_handle, "plan_db");
    // imc_to_ros::BridgeServer<IMC::PlanControl, imc_ros_msgs::msg::PlanControl> plancontrol_server(imc_handle,  "plan_control");
    RCLCPP_INFO(ros_node->get_logger(), "created servers3");
    auto announce_timer = ros_node->create_wall_timer(std::chrono::seconds(10), [&imc_handle](){imc_handle.announce();});
    auto heartbeat_timer = ros_node->create_wall_timer(std::chrono::seconds(1), [&imc_handle](){imc_handle.announce();});

    rclcpp::spin(ros_node);
    rclcpp::shutdown();
    return 0;
}
