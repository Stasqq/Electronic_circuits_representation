//
// Created by Stasiek on 2019-01-09.
//

#ifndef PROI_3RD_RESISTOR_H
#define PROI_3RD_RESISTOR_H

#include "Element.h"

class Resistor : public Element {
private:
    double resistance;
public:
    explicit Resistor(double r);

    double getValue() override;

    void setResistance(double resistance);
};


#endif //PROI_3RD_RESISTOR_H
