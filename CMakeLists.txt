cmake_minimum_required(VERSION 3.30)
project(c_areaCalculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(c_areaCalculator main.cpp
        welcomeMessage.cpp
        getUserAreaPerimerterExit.cpp
        userCalculations.cpp
        askUserExit.cpp)
