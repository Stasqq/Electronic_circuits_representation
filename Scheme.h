//
// Created by Stasiek on 2019-01-10.
//

#ifndef PROI_3RD_SCHEME_H
#define PROI_3RD_SCHEME_H

#include "Element.h"
#include <iostream>
#include <vector>
#include "Node.h"
#include "VoltageSource.h"
#include "Capacitor.h"
#include "Resistor.h"

using namespace std;

class Scheme : public Element{
private:
    vector<Node> nodes;
    vector<Element*> elements;
public:
    Scheme() {eleType=Bra;};

    Node* addNode(int nrElementIn, int nrElementOut);

    Node* addNode(int nrElementIn, int nrElementOut1, int nrElementOut2);

    Resistor* addResistor(double resistance);

    Capacitor* addCapacitor(double capacity);

    Scheme* addScheme(Scheme& s);

    double calculateResistance();

    double calculateCapitance();

    double getValue() override;
};


#endif //PROI_3RD_SCHEME_H
