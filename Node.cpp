//
// Created by Stasiek on 2019-01-10.
//

#include "Node.h"

Node::Node() {
    nrElementOut=0;
    nrElementIn=0;
}

int Node::getNrElementIn() const {
    return nrElementIn;
}

void Node::setNrElementIn(int nrElementIn) {
    Node::nrElementIn = nrElementIn;
}

int Node::getNrElementOut() const {
    return nrElementOut;
}

void Node::setNrElementOut(int nrElementOut) {
    Node::nrElementOut = nrElementOut;
}
