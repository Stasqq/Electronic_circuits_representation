//
// Created by Stasiek on 2019-01-09.
//

#ifndef PROI_3RD_RESISTOR_H
#define PROI_3RD_RESISTOR_H


class Resistor {
private:
    double resistance;
public:
    explicit Resistor(double r) { resistance=r; };

    double getResistance() const;

    void setResistance(double resistance);
};


#endif //PROI_3RD_RESISTOR_H
