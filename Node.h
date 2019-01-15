//
// Created by Stasiek on 2019-01-10.
//

#ifndef PROI_3RD_NODE_H
#define PROI_3RD_NODE_H


class Node {
private:
    int nrElementIn;
    int nrElementOut;
public:
    Node();
    Node(int in, int out){ nrElementIn=in; nrElementOut=out; }

    int getNrElementIn() const;

    void setNrElementIn(int nrElementIn);

    int getNrElementOut() const;

    void setNrElementOut(int nrElementOut);;
};


#endif //PROI_3RD_NODE_H
