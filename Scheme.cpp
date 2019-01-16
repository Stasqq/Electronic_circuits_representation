//
// Created by Stasiek on 2019-01-10.
//

#include "Scheme.h"

Node* Scheme::addNode(int nrElementIn, int nrElementOut){
    Node* N= new Node(nrElementIn,nrElementOut);
    nodes.push_back(*N);
    return N;
}

Node* Scheme::addNode(int nrElementIn, int nrElementOut1, int nrElementOut2){
    Node* N= new Node(nrElementIn,nrElementOut1,nrElementOut2);
    nodes.push_back(*N);
    return N;
}

Resistor* Scheme::addResistor(double resistance){
    Resistor* R=new Resistor(resistance);
    elements.push_back(R);
    return R;
}

Capacitor* Scheme::addCapacitor(double capacity) {
    Capacitor* C=new Capacitor(capacity);
    elements.push_back(C);
    return C;
}

Scheme* Scheme::addScheme(Scheme& s){
    elements.push_back(&s);
    return &s;
}

double Scheme::calculateResistance() {
    double output=0;
    int type, i = nodes.size();

    for(int j=0;j<i-1;j++){
        if(nodes[j].getOutNumber() == 1){
            type=elements[nodes[j].getNrElementOut(0)]->getEleType();
            if(type == 1){
                Resistor* R;
                R= dynamic_cast<Resistor*>(elements[nodes[j].getNrElementOut(0)]);
                output+=R->getValue();
            }else if(type == 0){
                Scheme* S;
                S= dynamic_cast<Scheme*>(elements[nodes[j].getNrElementOut(0)]);
                output+=S->calculateResistance();
            }
        }else{
            type=elements[nodes[j].getNrElementOut(0)]->getEleType();
            int type2=elements[nodes[j].getNrElementOut(1)]->getEleType();
            if(type == 1 && type2 == 1){
                Resistor *R1,*R2;
                R1= dynamic_cast<Resistor*>(elements[nodes[j].getNrElementOut(0)]);
                R2= dynamic_cast<Resistor*>(elements[nodes[j].getNrElementOut(1)]);
                output+=R1->getValue()*R2->getValue()/(R1->getValue()+R2->getValue());
            }else if(type == 0 && type2 == 0){
                Scheme *S1,*S2;
                S1= dynamic_cast<Scheme*>(elements[nodes[j].getNrElementOut(0)]);
                S2= dynamic_cast<Scheme*>(elements[nodes[j].getNrElementOut(1)]);
                output+=S1->calculateResistance()*S2->calculateResistance()/(S1->calculateResistance()+S2->calculateResistance());
            }else if(type == 1 && type2 ==0){
                Resistor *R;
                R=dynamic_cast<Resistor*>(elements[nodes[j].getNrElementOut(0)]);
                Scheme *S;
                S=dynamic_cast<Scheme*>(elements[nodes[j].getNrElementOut(1)]);
                output+=S->calculateResistance()*R->getValue()/(S->calculateResistance()+R->getValue());
            }else if(type == 0 && type2 == 1){
                Scheme *S;
                S=dynamic_cast<Scheme*>(elements[nodes[j].getNrElementOut(0)]);
                Resistor *R;
                R=dynamic_cast<Resistor*>(elements[nodes[j].getNrElementOut(1)]);
                output+=S->calculateResistance()*R->getValue()/(S->calculateResistance()+R->getValue());
            }

        }
    }
    return output;
}

double Scheme::calculateCapitance() {
    double output=0;
    int type, i = nodes.size();

    for(int j=0;j<i-1;j++){
        if(nodes[j].getOutNumber() == 1){
            type=elements[nodes[j].getNrElementOut(0)]->getEleType();
            if(type == 2){
                Capacitor* C;
                C= dynamic_cast<Capacitor*>(elements[nodes[j].getNrElementOut(0)]);
                if(output == 0)
                    output+=C->getValue();
                else{
                    output = output*C->getValue()/(output+C->getValue());
                }
            }else if(type == 0){
                Scheme* S;
                S= dynamic_cast<Scheme*>(elements[nodes[j].getNrElementOut(0)]);
                if(output == 0)
                    output+=S->calculateCapitance();
                else{
                    output = output*S->calculateCapitance()/(output+S->calculateCapitance());
                }
            }
        }else{
            type=elements[nodes[j].getNrElementOut(0)]->getEleType();
            int type2=elements[nodes[j].getNrElementOut(1)]->getEleType();
            if(type == 2 && type2 == 2){
                Capacitor *C1,*C2;
                C1= dynamic_cast<Capacitor*>(elements[nodes[j].getNrElementOut(0)]);
                C2= dynamic_cast<Capacitor*>(elements[nodes[j].getNrElementOut(1)]);
                if(output == 0)
                    output+=C1->getValue()+C2->getValue();
                else{
                    double mark=C1->getValue()+C2->getValue();
                    output=output*mark/(output+mark);
                }
            }else if(type == 0 && type2 == 0){
                Scheme *S1,*S2;
                S1= dynamic_cast<Scheme*>(elements[nodes[j].getNrElementOut(0)]);
                S2= dynamic_cast<Scheme*>(elements[nodes[j].getNrElementOut(1)]);
                if(output==0)
                    output+=S1->calculateCapitance()+S2->calculateCapitance();
                else{
                    double mark=S1->calculateCapitance()+S2->calculateCapitance();
                    output=mark*output/(mark+output);
                }
            }else if(type == 2 && type2 ==0){
                Capacitor *C;
                C=dynamic_cast<Capacitor*>(elements[nodes[j].getNrElementOut(0)]);
                Scheme *S;
                S=dynamic_cast<Scheme*>(elements[nodes[j].getNrElementOut(1)]);
                if(output == 0)
                    output+=C->getValue()+S->calculateCapitance();
                else{
                    double mark=C->getValue()+S->calculateCapitance();
                    output=output*mark/(mark+output);
                }
            }else if(type == 0 && type2 == 2){
                Scheme *S;
                S=dynamic_cast<Scheme*>(elements[nodes[j].getNrElementOut(0)]);
                Capacitor *C;
                C=dynamic_cast<Capacitor*>(elements[nodes[j].getNrElementOut(1)]);
                if(output == 0)
                    output+=S->calculateCapitance()+C->getValue();
                else{
                    double mark=S->calculateCapitance()+C->getValue();
                    output=output*mark/(mark+output);
                }
            }
        }
    }
    return output;
}

double Scheme::getValue() {
    return -1;
}