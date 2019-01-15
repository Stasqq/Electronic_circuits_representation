//
// Created by Stasiek on 2019-01-10.
//

#include "Scheme.h"


Scheme::Scheme() {

}

void Scheme::addNode(int nrElementIn, int nrElementOut){
    Node N=Node(nrElementIn,nrElementOut);
    nodes.push_back(N);
}

void Scheme::addResistor(double resistance){
    Resistor* R=new Resistor(resistance, nullptr, nullptr);
    elements.push_back(R);
}

double Scheme::calculateResistance(){
    double output=0;
    int i=0,type;
    Resistor* R;
    while(nodes[i].getNrElementOut() != -2){
        type=elements[nodes[i].getNrElementOut()]->getEleType();
        if(type == 1){
            R = dynamic_cast<Resistor*>(elements[nodes[i].getNrElementOut()]);
            output+=R->getValue();
        }
        i++;
    }

    return output;
}