//
// Created by Stasiek on 2019-01-10.
//

#ifndef PROI_3RD_ELEMENT_H
#define PROI_3RD_ELEMENT_H

#include "Node.h"

enum elementType{Resistor=1,Capacitor=2,VoltageSource=3};

class Element {
protected:
    enum elementType eleType;
    Node* prevNode;
    Node* nextNode;
public:
    Element() = default;
};


#endif //PROI_3RD_ELEMENT_H
