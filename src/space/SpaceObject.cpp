//
// Created by magofrays on 10/26/25.
//

#include "SpaceObject.h"

std::vector<BodyState> SpaceObject::get_body_states() const
{
    std::vector<BodyState> array(body_states.size());
    for (const auto& pair : body_states) {
        array.push_back(pair.second);
    }
    return array;
}

void SpaceObject::add_body_state(const BodyState& body_state)
{
    body_states[body_state.time] = body_state;
}

BodyState SpaceObject::get_body_state(SpiceDouble tdb)
{
    if (this->body_states.find(tdb)!= this->body_states.end())
    {
        return this->body_states[tdb];
    }
    throw std::runtime_error("SpaceObject::get_body_state: body state not found");
}

