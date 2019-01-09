//
// Created by Stasiek on 2019-01-09.
//

#include "Resistor.h"

double Resistor::getResistance() const {
    return resistance;
}

void Resistor::setResistance(double resistance) {
    Resistor::resistance = resistance;
}
