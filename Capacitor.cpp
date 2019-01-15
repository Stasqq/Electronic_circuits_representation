//
// Created by Stasiek on 2019-01-09.
//

#include "Capacitor.h"

Capacitor::Capacitor(double c, Node *prev, Node *next) {
    capacitance=c;
    eleType=elementType::Cap;
    prevNode=prev;
    nextNode=next;
}

double Capacitor::getValue() {
    return Capacitor::capacitance;
}

void Capacitor::setCapacitance(double capacitance) {
    Capacitor::capacitance = capacitance;
}
