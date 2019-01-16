//
// Created by Stasiek on 2019-01-09.
//

#ifndef PROI_3RD_CAPACITOR_H
#define PROI_3RD_CAPACITOR_H

#include "Element.h"

class Capacitor : public Element {
private:
    double capacitance;
public:
    explicit Capacitor(double c);

    double getValue() override;

    void setCapacitance(double capacitance);
};


#endif //PROI_3RD_CAPACITOR_H
