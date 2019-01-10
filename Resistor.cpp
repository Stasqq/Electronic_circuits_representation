//
// Created by Stasiek on 2019-01-09.
//

#include "Resistor.h"

Resistor::Resistor(double r, Node* prev, Node* next) {
    resistance=r;
    eleType=elementType::Resistor;
    prevNode=prev;
    nextNode=next;
}

double Resistor::getResistance() const {
    return resistance;
}

void Resistor::setResistance(double resistance) {
    Resistor::resistance = resistance;
}
