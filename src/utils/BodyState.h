//
// Created by magofrays on 10/26/25.
//

#ifndef MYPROJECT_BODY_STATE_H
#define MYPROJECT_BODY_STATE_H
#include "TDBTime.h"
#include "Vec3d.h"


struct BodyState
{
    Vec3d position;
    Vec3d velocity;
    TDBTime time;
    BodyState() : position(), velocity(), time() {}
    BodyState(const Vec3d& position, const Vec3d& velocity, TDBTime time);
};


#endif //MAGELLAN_ORBIT_BODY_STATE_H