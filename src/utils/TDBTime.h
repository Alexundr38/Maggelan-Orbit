//
// Created by magofrays on 10/26/25.
//

#ifndef MAGELLANORBIT_TDBTIME_H
#define MAGELLANORBIT_TDBTIME_H
#include <string>

struct TDBTime
{
    double julian_day;
    std::string human_readable;
    [[nodiscard]] double secondsSinceJ2000() const;

    TDBTime() : julian_day(0) {}
    explicit TDBTime( double julian_day);
    TDBTime( double julian_day, std::string human_readable);
};


#endif //MAGELLANORBIT_TDBTIME_H