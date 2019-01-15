//
// Created by Stasiek on 2019-01-10.
//

#ifndef PROI_3RD_ELEMENT_H
#define PROI_3RD_ELEMENT_H

#include "Node.h"

enum elementType{Res=1,Cap=2,Vol=3};

class Element {
protected:
    enum elementType eleType;
    Node* prevNode;
    Node* nextNode;
public:
    elementType getEleType() const;

    void setEleType(elementType eleType);

    Node *getPrevNode() const;

    void setPrevNode(Node *prevNode);

    Node *getNextNode() const;

    void setNextNode(Node *nextNode);

    virtual double getValue() = 0;

};


#endif //PROI_3RD_ELEMENT_H
