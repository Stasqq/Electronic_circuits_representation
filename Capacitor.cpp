//
// Created by Stasiek on 2019-01-09.
//

#include "Capacitor.h"

Capacitor::Capacitor(double c, Node *prev, Node *next) {
    capacitance=c;
    eleType=elementType::Capacitor;
    prevNode=prev;
    nextNode=next;
}

double Capacitor::getCapacitance() const {
    return capacitance;
}

void Capacitor::setCapacitance(double capacitance) {
    Capacitor::capacitance = capacitance;
}
