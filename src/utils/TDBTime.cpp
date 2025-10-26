//
// Created by magofrays on 10/26/25.
//
#include "TDBTime.h"

#include <utility>
#include "Constants.h"
#include "TimeConverter.h"

TDBTime::TDBTime( double julian_day)
{
    this->julian_day = julian_day;
    this->human_readable = TimeConverter::jdToCalendarString(julian_day);
}

TDBTime::TDBTime( double julian_day, std::string human_readable)
{
    this->julian_day = julian_day;
    this->human_readable = std::move(human_readable);
}

double TDBTime::secondsSinceJ2000() const
{
    return julian_day - J2000_JD;
}

