//
// Created by Stasiek on 2019-01-10.
//

#include "VoltageSource.h"

VoltageSource::VoltageSource(double v, Node *prev, Node *next) {
    voltage=v;
    eleType=elementType::VoltageSource;
    prevNode=prev;
    nextNode=next;
}

double VoltageSource::getVoltage() const {
    return voltage;
}

void VoltageSource::setVoltage(double voltage) {
    VoltageSource::voltage = voltage;
}
