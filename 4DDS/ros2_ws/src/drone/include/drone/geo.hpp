#pragma once

#include <cmath>

namespace geo
{
    /// Metres in one latitude degree.
    constexpr double LATITUDE_M  = 111111.0;  

    /// Metres in one longitude degree.
    constexpr double LONGITUDE_M = 111320.0;  


    /**
     * @brief Converts degrees to radians.
     * @param deg The angle in degrees to be converted.
     * @returns The angle in radians.
    */
    inline double degreesToRadians(double deg) noexcept
    {
        return (deg * M_PI / 180);
    }


    /**
     * @brief Converts radians to degrees.
     * @param rad The angle in radians to be converted.
     * @returns The angle in degrees.
    */
    inline double radiansToDegrees(double rad) noexcept
    {
        return (rad * 180 / M_PI);
    }


    /**
     * @brief Converts a latitude coordinate in degrees ([-90; 90]) to a latitude coordinate in metres.
     * @param lat_deg The latitude coordinate to be converted.
     * @returns The latitude coordinate in metres.
    */
    inline double latitudeDegToMetres(const double lat_deg) 
    {
        return lat_deg*LATITUDE_M;
    }


    /**
     * @brief Converts a longitude coordinate in degrees ([-90; 90]) to a longitude coordinate in metres.
     * @param lat_deg The latitude of the longitude coordinate to be converted.
     * @param lon_deg The longitude coordinate to be converted.
     * @returns The longitude coordinate in metres.
    */
    inline double longitudeDegToMetres(const double lat_deg, const double lon_deg) 
    {
        return cos(degreesToRadians(lat_deg))*LONGITUDE_M*lon_deg;
    }


    /**
     * @brief Converts the bearing of an obstacle (in radians) as advertised by the LiDAR sensor to a yaw angle (in radians).
     * @details When the LiDAR senses an obstacle, it advertises the obstacle bearing starting at 0 (exact back of the vehicle)
     * and ending at 2PI (again exact back of the vehicle). Intermediate angles are considered clockwise starting from the back
     * of the vehicle. For example, if the obstacle is sensed to be at PI, it means the obstacle is at the exact front of the vehicle.
     * @param bearing The bearing (in radians) of the obstacle as advertised by the LiDAR sensor.
     * @returns The equivalent yaw angle in radians.
    */
    inline float lidarBearingToYaw(const float bearing_rad)
    {   
        if (bearing_rad > M_PI && bearing_rad < 2*M_PI)
            return bearing_rad - M_PI;
        else
            return bearing_rad + M_PI;
    }

    
};