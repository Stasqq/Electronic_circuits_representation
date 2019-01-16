//
// Created by Stasiek on 2019-01-10.
//

#include "VoltageSource.h"

VoltageSource::VoltageSource(double v) {
    voltage = v;
    eleType = elementType::Vol;
}

double VoltageSource::getValue() {
    return voltage;
}

void VoltageSource::setVoltage(double voltage) {
    VoltageSource::voltage = voltage;
}
