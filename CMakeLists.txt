cmake_minimum_required(VERSION 3.20)
project(MagellanOrbit VERSION 1.0.0 LANGUAGES CXX)

add_executable(magellan-orbit src/utils/Vec3d.cpp
        src/utils/BodyState.cpp
        src/utils/BodyState.h
        src/utils/BodyData.cpp
        src/utils/BodyData.h
        src/utils/TDBTime.h
        src/utils/TDBTime.cpp
        src/utils/Constants.h
        src/utils/TimeConverter.cpp
        src/utils/TimeConverter.h
)
