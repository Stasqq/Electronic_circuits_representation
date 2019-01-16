//
// Created by Stasiek on 2019-01-10.
//

#ifndef PROI_3RD_NODE_H
#define PROI_3RD_NODE_H

#include <vector>

class Node {
private:
    int nrElementIn;
    std::vector<int> nrElementOut;
public:
    Node(int in, int out){ nrElementIn=in; nrElementOut.push_back(out); }

    Node(int in, int out1, int out2);

    int getOutNumber();

    int getNrElementOut(int nr);

    int getNrElementIn() const;

    void setNrElementIn(int nrElementIn);
};


#endif //PROI_3RD_NODE_H
