//
// Created by magofrays on 10/26/25.
//

#ifndef MESSENGERORBIT_BODYDATA_H
#define MESSENGERORBIT_BODYDATA_H
#include <map>
#include <vector>

#include "../types/BodyState.h"


class SpaceObject
{
    protected:
    std::map<SpiceDouble, BodyState> body_states;
    public:
    [[nodiscard]] std::vector<BodyState> get_body_states() const;
    void add_body_state(const BodyState& body_state);
    BodyState get_body_state(SpiceDouble tdb);
};


#endif //MESSENGERORBIT_BODYDATA_H