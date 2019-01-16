//
// Created by Stasiek on 2019-01-10.
//

#ifndef PROI_3RD_ELEMENT_H
#define PROI_3RD_ELEMENT_H

#include "Node.h"

enum elementType {
    Sch = 0, Res = 1, Cap = 2, Vol = 3
};

class Element {
protected:
    enum elementType eleType;
public:
    elementType getEleType() const;

    virtual double getValue() = 0;

};


#endif //PROI_3RD_ELEMENT_H
