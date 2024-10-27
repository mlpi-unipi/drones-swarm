#include "obstacle_avoidance/ObstacleAvoidance.hpp"

void fdds::ObstacleAvoidance::scannerSubscriptionCallback(sensor_msgs::msg::LaserScan::SharedPtr msg)
{
    lastScan = msg;
}

Eigen::Vector2f fdds::ObstacleAvoidance::tick()
{
    #ifdef VFH_AVOIDANCE
        return vectorFieldHistogram();
    #endif

    return virtualForce();
}

Eigen::Vector2f fdds::ObstacleAvoidance::vectorFieldHistogram()
{
    return Eigen::Vector2f{};
}

Eigen::Vector2f fdds::ObstacleAvoidance::virtualForce()
{
    if (lastScan == nullptr)
        return Eigen::Vector2f::Zero();

    const auto& ranges = lastScan->ranges;
    float angle_rad = -M_PIf;

    Eigen::Vector2f repulsiveForce = Eigen::Vector2f::Zero();
    int num_obs = 0;

    for (const auto& obs_range: ranges)
    {
        if (!std::isinf(obs_range) && !std::isnan(obs_range) && obs_range < parameters.avoidanceRadius)
        {
            num_obs++;
            repulsiveForce += obs_range * Eigen::Vector2f{cos(angle_rad), sin(angle_rad)};
        }

        angle_rad += lastScan->angle_increment;
    }
    
    if (num_obs == 0)
        return Eigen::Vector2f::Zero();
    
    repulsiveForce /= num_obs;

    const auto length = repulsiveForce.norm();
    repulsiveForce = repulsiveForce.normalized()*(parameters.avoidanceRadius - length);
    return repulsiveForce;
}