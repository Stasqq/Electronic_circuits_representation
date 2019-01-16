//
// Created by Stasiek on 2019-01-09.
//

#include "Capacitor.h"

Capacitor::Capacitor(double c) {
    capacitance=c;
    eleType=elementType::Cap;
}

double Capacitor::getValue() {
    return Capacitor::capacitance;
}

void Capacitor::setCapacitance(double capacitance) {
    Capacitor::capacitance = capacitance;
}
