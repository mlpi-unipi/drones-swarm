#pragma once

#include "parameters/yaml.hpp"

namespace fdds
{
    struct Parameters
    {
        int controllerTimerMs;
        float maxSpeed;
        float desiredRelativeAltitude;
        float avoidanceRadius;
        float avoidanceFactor;
        float cohesionRadius;
        float cohesionFactor;
        float alignmentRadius;
        float alignmentFactor;

        explicit Parameters(const int controller_timer_ms,
                            const float max_speed,
                            const float rel_altitude,
                            const float avoidance_radius,
                            const float avoidance_factor,
                            const float cohesion_radius,
                            const float cohesion_factor,
                            const float alignment_radius,
                            const float alignment_factor) : controllerTimerMs(controller_timer_ms),
                                                            maxSpeed(max_speed),
                                                            desiredRelativeAltitude(rel_altitude),
                                                            avoidanceRadius(avoidance_radius),
                                                            avoidanceFactor(avoidance_factor),
                                                            cohesionRadius(cohesion_radius),
                                                            cohesionFactor(cohesion_factor),
                                                            alignmentRadius(alignment_radius),
                                                            alignmentFactor(alignment_factor) {}

        Parameters() = delete;
    };


    inline Parameters loadOptions(bool verbose)
    {
        Yaml::Node config_file;
        Yaml::Parse(config_file, "/home/fourdds/.swarm/options.yaml");

        return Parameters(
            config_file["controllerTimerMs"].As<int>(),
            config_file["maxSpeed"].As<float>(),
            config_file["desiredRelativeAltitude"].As<float>(),
            config_file["avoidanceRadius"].As<float>(),
            config_file["avoidanceFactor"].As<float>(),
            config_file["cohesionRadius"].As<float>(),
            config_file["cohesionFactor"].As<float>(),
            config_file["alignmentRadius"].As<float>(),
            config_file["alignmentFactor"].As<float>()
        );
    }
};