//
// Created by magofrays on 10/26/25.
//

#ifndef MAGELLANORBIT_BODYDATA_H
#define MAGELLANORBIT_BODYDATA_H
#include <vector>

#include "BodyState.h"


class BodyData
{
    private:
    std::vector<BodyState> bodyStates;
    public:
    [[nodiscard]] std::vector<BodyState> get_body_states() const;
    void addBodyState(const BodyState& body_state);
};


#endif //MAGELLANORBIT_BODYDATA_H