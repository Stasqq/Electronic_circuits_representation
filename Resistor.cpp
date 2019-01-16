//
// Created by Stasiek on 2019-01-09.
//

#include "Resistor.h"

Resistor::Resistor(double r) {
    resistance = r;
    eleType = elementType::Res;
}

double Resistor::getValue() {
    return resistance;
}

void Resistor::setResistance(double resistance) {
    Resistor::resistance = resistance;
}
