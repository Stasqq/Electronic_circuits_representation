//
// Created by Stasiek on 2019-01-10.
//

#include "Element.h"

Node *Element::getPrevNode() const {
    return prevNode;
}

void Element::setPrevNode(Node *prevNode) {
    Element::prevNode = prevNode;
}

Node *Element::getNextNode() const {
    return nextNode;
}

void Element::setNextNode(Node *nextNode) {
    Element::nextNode = nextNode;
}

elementType Element::getEleType() const {
    return eleType;
}

void Element::setEleType(elementType eleType) {
    Element::eleType = eleType;
}
