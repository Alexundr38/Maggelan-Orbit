//
// Created by magofrays on 11/1/25.
//

#ifndef MESSENGERORBIT_SPACEOBJECTENTITY_H
#define MESSENGERORBIT_SPACEOBJECTENTITY_H

#include "SpaceObject.h"
#include "../utils/SpaceObjectManager.h"

class SpaceObjectEntity: public SpaceObject
{
    std::string object_name;
    SpiceDouble gravitational_parameter;

public:
    [[nodiscard]] SpiceDouble get_gm() const;
    [[nodiscard]] std::string get_object_name() const;
    void set_object_name(const std::string& object_name);
    explicit SpaceObjectEntity(const std::string& object_name);
    BodyState get_body_state(SpiceDouble tdb);
};


#endif //MESSENGERORBIT_SPACEOBJECTENTITY_H