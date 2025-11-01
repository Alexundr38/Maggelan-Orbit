//
// Created by magofrays on 11/1/25.
//

#include "SpaceObjectEntity.h"

SpiceDouble SpaceObjectEntity::get_gm() const
{
    return gravitational_parameter;
}

std::string SpaceObjectEntity::get_object_name() const
{
    return object_name;
}

void SpaceObjectEntity::set_object_name(const std::string& object_name)
{
    this->object_name = object_name;
    this->gravitational_parameter = SpaceObjectManager::get_body_gm(object_name);
}

SpaceObjectEntity::SpaceObjectEntity(const std::string& object_name)
{
    this->object_name = object_name;
    this->gravitational_parameter = SpaceObjectManager::get_body_gm(object_name);
}

BodyState SpaceObjectEntity::get_body_state(SpiceDouble tdb)
{
    try
    {
        return SpaceObject::get_body_state(tdb);
    }catch (std::runtime_error &e)
    {
        BodyState new_state = SpaceObjectManager::get_body_state_at_time(tdb, object_name);
        add_body_state(new_state);
        return new_state;
    }
}
