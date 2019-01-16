cmake_minimum_required(VERSION 3.12)
project(proi_3rd)

set(CMAKE_CXX_STANDARD 14)

add_executable(proi_3rd main.cpp Resistor.cpp Resistor.h Capacitor.cpp Capacitor.h Node.cpp Node.h Element.cpp Element.h VoltageSource.cpp VoltageSource.h Scheme.cpp Scheme.h Tests.cpp Tests.h)