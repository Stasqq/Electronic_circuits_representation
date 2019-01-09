//
// Created by Stasiek on 2019-01-09.
//

#ifndef PROI_3RD_CAPACITOR_H
#define PROI_3RD_CAPACITOR_H


class Capacitor {
private:
    double capacitance;
public:
    explicit Capacitor(double c) { capacitance=c; };

    double getCapacitance() const;

    void setCapacitance(double capacitance);
};


#endif //PROI_3RD_CAPACITOR_H
