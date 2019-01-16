//
// Created by Stasiek on 2019-01-16.
//

#include "Tests.h"
bool Tests::runTests() {
    return amperageTest() && capacityTest() && resistanceTest();
}

bool Tests::amperageTest() {
    Scheme S=Scheme(100);  //scheme with voltage source 100
    S.addElement(Res,20);  //resistor 20
    S.addNode(-1,0);
    S.addNode(0,1);
    S.addNode(1,-2);
    //output should be 100/20=5

    if(S.calculateAmperage() == 5){
        std::cout<<"amperageTest\t->\tOK!"<<std::endl;
        return true;
    }
    std::cout<<"Something went wrong in amperageTest(), output should be 5, there is"<<S.calculateAmperage()<<std::endl;
    return false;
}

bool Tests::capacityTest() {
    Scheme S;
    Scheme S2;

    S2.addElement(Cap,10);
    S2.addElement(Cap,10);
    S2.addNode(-1,0);
    S2.addNode(0,1);
    S2.addNode(1,-2);
    //scheme with 2 capacitors each 10, both 5

    S.addElement(Cap,20);
    //1st capacitor

    S.addElement(Cap,15);
    S.addScheme(S2);
    S.addNode(-1,0);
    S.addNode(0,1,2);
    //parallel connection S2(capacity 5) and capacitor 10, together 20
    S.addNode(1,-2);
    // capacitor 20 and 20, both 10
    if(S.calculateCapitance() == 10){
        std::cout<<"capacityTest\t->\tOK!"<<std::endl;
        return true;
    }
    std::cout<<"Something went wrong in capacityTest(), output should be 10, there is"<<S.calculateCapitance()<<std::endl;
    return false;
}

bool Tests::resistanceTest() {
    Scheme S;
    Scheme rowno1,rowno2;
    rowno1.addElement(Res,10);
    rowno1.addElement(Res,20);
    rowno1.addElement(Res,20);
    rowno1.addNode(-1,0);
    rowno1.addNode(0,1,2);
    rowno1.addNode(1,-2);
    //       /20
    //  10 -|
    //       \20
    //rowno1 = 10+10=20

    rowno2.addElement(Res,20);
    rowno2.addNode(-1,0);
    rowno2.addNode(0,-2);
    //rowno2 = 20

    S.addElement(Res,10);
    S.addNode(-1,0);
    S.addScheme(rowno1);
    S.addScheme(rowno2);
    S.addNode(0,1,2);
    S.addNode(1,-2);
    //       /rowno1=20
    //  10 -|
    //       \rowno2=20
    //S=10+10=20

    if(S.calculateResistance() == 20){
        std::cout<<"resistanceTest\t->\tOK!"<<std::endl;
        return true;
    }
    std::cout<<"Something went wrong in resistanceTest(), output should be 20, there is"<<S.calculateResistance()<<std::endl;
    return false;
}