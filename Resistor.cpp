//
// Created by Stasiek on 2019-01-09.
//

#include "Resistor.h"

Resistor::Resistor(double r, Node* prev, Node* next) {
    resistance=r;
    eleType=elementType::Res;
    prevNode=prev;
    nextNode=next;
}

double Resistor::getValue(){
    return resistance;
}

void Resistor::setResistance(double resistance) {
    Resistor::resistance = resistance;
}
