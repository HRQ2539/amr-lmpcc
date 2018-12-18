#ifndef LMPCC_OBSTACLE_FEED_CONFIGURATION_H
#define LMPCC_OBSTACLE_FEED_CONFIGURATION_H

#include <ros/ros.h>

#include <string>

using namespace std;

class lmpcc_obstacle_feed_configuration
{

public:

    lmpcc_obstacle_feed_configuration();

    ~lmpcc_obstacle_feed_configuration();

    bool initialize();
    bool updateConfiguration();

    bool initialize_success_;

    int obstacle_feed_mode_;

    bool activate_debug_output_;
    bool activate_visualization_;

    int update_rate_;
    int discretization_steps_;
    double prediction_horizon_;

    string planning_frame_;
    string robot_frame_;

    string pub_obstacles_;
    string pub_obstacles_vis_;

    string sub_detections_;
    string sub_optitrack_;

    double distance_threshold_;
    int obstacle_threshold_;
    double min_obstacle_volume_;
    double max_obstacle_volume_;
    double obstacle_size_;

    std::vector<double> obst_pose_x_;
    std::vector<double> obst_pose_y_;
    std::vector<double> obst_pose_heading_;
    std::vector<double> v_x_;
    std::vector<double> v_y_;
    std::vector<double> obst_dim_minor_;
    std::vector<double> obst_dim_major_;

private:

    void free_allocated_memory();

    void print_configuration_parameter();

};

#endif //LMPCC_OBSTACLE_FEED_CONFIGURATION_H