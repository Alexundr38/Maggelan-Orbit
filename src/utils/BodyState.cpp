//
// Created by magofrays on 10/26/25.
//

#include "BodyState.h"

#include <utility>

BodyState::BodyState(const Vec3d& position, const Vec3d& velocity, TDBTime time)
{
    this->position = position;
    this->velocity = velocity;
    this->time = std::move(time);
}
