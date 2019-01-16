//
// Created by Stasiek on 2019-01-10.
//

#include "Node.h"

Node::Node(int in, int out1, int out2) {
    nrElementIn = in;
    nrElementOut.push_back(out1);
    nrElementOut.push_back(out2);
}

int Node::getNrElementIn() const {
    return nrElementIn;
}

void Node::setNrElementIn(int nrElementIn) {
    Node::nrElementIn = nrElementIn;
}

int Node::getOutNumber() {
    return nrElementOut.size();
}

int Node::getNrElementOut(int nr) {
    return nrElementOut[nr];
}