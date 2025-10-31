//
// Created by magofrays on 10/26/25.
//

#ifndef MAGELLANORBIT_TIMECONVERTER_H
#define MAGELLANORBIT_TIMECONVERTER_H

#include <iomanip>

class TimeConverter {
public:
    static std::string jdToCalendarString(double jd, bool include_era = true);

    static void jdToCalendar(double jd, int& year, int& month, int& day,
                            int& hours, int& minutes, double& seconds);
};

#endif //MAGELLANORBIT_TIMECONVERTER_H