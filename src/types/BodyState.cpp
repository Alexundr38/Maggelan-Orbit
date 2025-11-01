//
// Created by magofrays on 10/26/25.
//

#include "BodyState.h"

#include <utility>

BodyState::BodyState(const Vec3d& position, const Vec3d& velocity, const SpiceDouble time, const SpiceDouble light_time)
{
    this->position = position;
    this->velocity = velocity;
    this->time = time;
    this->light_time = light_time;
}

std::ostream& operator<<(std::ostream& os, const BodyState& state)
{
    os << std::fixed << std::setprecision(6);
    os << "Time: " << state.time << " TDB\n";
    os << "Light time: " << state.light_time << " s\n";
    os << "Position: (" << state.position.x << ", "
        << state.position.y << ", " << state.position.z << ") km\n";
    os << "Velocity: (" << state.velocity.x << ", "
        << state.velocity.y << ", " << state.velocity.z << ") km/s";
    return os;
}
