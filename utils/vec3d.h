//
// Created by magofrays on 10/25/25.
//

#ifndef MAGGELAN_ORBIT_VEC3D_H
#define MAGGELAN_ORBIT_VEC3D_H


stuct vec3d
{
    double x, y, z;
    vec3d() {
        x = 0; y = 0; z = 0;
    }
    vec3d(x, y, z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    double norm();
};


#endif //MAGGELAN_ORBIT_VEC3D_H