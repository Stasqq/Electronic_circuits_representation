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

/*
 * Using tips:
 * when you want to add some new element to scheme you should:
 * 1. add(Resistor/Scheme/Capacitor)
 * 2. addNode(x,ElementNumber) //it's node which connect your new element with scheme
 *
 * if it's 1st element
 * 2. addNode(-1,0)
 *
 * if its's last element
 * 3. addNode(x,-2)
 *
 * when you need some parallel connection
 * 1. add 2 elements
 * 2. addNode(element number befor parallel connection, 1st element number, 2nd element number)
 *
 *
 * Warning!
 * Scheme have some recursion elements, so big scheme calculating can take a moment
 * Program operate only on 2-way parallel connections
 */


class Scheme : public Element {
private:
    vector<Node> nodes;
    vector<Element *> elements;
public:
    Scheme() { eleType = Sch; };

    Scheme(double voltage);

    Node *addNode(int nrElementIn, int nrElementOut);

    Node *addNode(int nrElementIn, int nrElementOut1, int nrElementOut2);

    Element* addElement(elementType type, double value);

    Scheme *addScheme(Scheme &s);

    double calculateAmperage();

    double calculateResistance();

    double calculateCapitance();

    int getElementsSize() { return elements.size(); }

    Element *getElement(int eleNumber) { return elements[eleNumber]; }

    double getValue() override;
};


#endif //PROI_3RD_SCHEME_H
