//
// Created by Stasiek on 2019-01-10.
//

#ifndef PROI_3RD_VOLTAGESOURCE_H
#define PROI_3RD_VOLTAGESOURCE_H

#include "Element.h"

class VoltageSource : public Element {
private:
    double voltage;
public:
    VoltageSource(double v);

    double getValue() override;

    void setVoltage(double voltage);
};


#endif //PROI_3RD_VOLTAGESOURCE_H
