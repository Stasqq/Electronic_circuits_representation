//
// Created by Stasiek on 2019-01-10.
//

#ifndef PROI_3RD_SCHEME_H
#define PROI_3RD_SCHEME_H

#include "Element.h"
#include <vector>
#include "Node.h"
#include "VoltageSource.h"
#include "Capacitor.h"
#include "Resistor.h"

using namespace std;

class Scheme {
private:
    vector<Node> nodes;
    vector<Element*> elements;
public:
    Scheme();

    void addNode(int nrElementIn, int nrElementOut);
    void addResistor(double resistance);

    double calculateResistance();
};


#endif //PROI_3RD_SCHEME_H
