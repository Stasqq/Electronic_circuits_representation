//
// Created by Stasiek on 2019-01-09.
//

#include "Capacitor.h"

double Capacitor::getCapacitance() const {
    return capacitance;
}

void Capacitor::setCapacitance(double capacitance) {
    Capacitor::capacitance = capacitance;
}
