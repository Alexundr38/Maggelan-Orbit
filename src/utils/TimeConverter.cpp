//
// Created by magofrays on 10/26/25.
//

#include "TimeConverter.h"

#include <vector>

std::string TimeConverter::jdToCalendarString(double jd, bool include_era)
{
    std::ostringstream oss;
    oss << std::setfill('0');

    int year, month, day_int, hours, minutes;
    double seconds;
    jdToCalendar(jd, year, month, day_int, hours, minutes, seconds);

    if (include_era) {
        oss << (year >= 0 ? "A.D. " : "B.C. ");
        if (year < 0) year = -year + 1;
    }

    static const std::vector<std::string> months = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    oss << year << "-" << months[month - 1] << "-"
        << std::setw(2) << day_int << " "
        << std::setw(2) << hours << ":"
        << std::setw(2) << minutes << ":"
        << std::setw(6) << std::fixed << std::setprecision(3) << seconds;

    return oss.str();
}

void TimeConverter::jdToCalendar(double jd, int& year, int& month, int& day, int& hours, int& minutes, double& seconds)
{
    double jd_adj = jd + 0.5;
    int z = static_cast<int>(jd_adj);
    double f = jd_adj - z;

    int a;
    if (z < 2299161) {
        a = z;
    } else {
        int alpha = static_cast<int>((z - 1867216.25) / 36524.25);
        a = z + 1 + alpha - alpha / 4;
    }

    int b = a + 1524;
    int c = static_cast<int>((b - 122.1) / 365.25);
    int d = static_cast<int>(365.25 * c);
    int e = static_cast<int>((b - d) / 30.6001);

    double day_dbl = b - d - static_cast<int>(30.6001 * e) + f;
    day = static_cast<int>(day_dbl);

    month = (e < 14) ? e - 1 : e - 13;

    year = (month > 2) ? c - 4716 : c - 4715;

    double time_frac = day_dbl - day;
    hours = static_cast<int>(time_frac * 24);
    minutes = static_cast<int>((time_frac * 24 - hours) * 60);
    seconds = ((time_frac * 24 - hours) * 60 - minutes) * 60;
}