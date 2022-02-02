//
// Created by Benjamin Milligan on 9/9/18.
//

#ifndef ALGORITHMSPROJECT1_PQUEUEOL_H
#define ALGORITHMSPROJECT1_PQUEUEOL_H


#include "PQueue.h"
#include <list>

class PQueueOL : public PQueue {
    list<int> myQueueOL;
public:
    PQueueOL();
    bool isEmpty();
    void push(int x);
    int min();
    int pop();
};


#endif //ALGORITHMSPROJECT1_PQUEUEOL_H
