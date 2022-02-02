//
// Created by Benjamin Milligan on 9/9/18.
//

#ifndef ALGORITHMSPROJECT1_PQUEUEHV_H
#define ALGORITHMSPROJECT1_PQUEUEHV_H


#include "PQueue.h"

class PQueueHV : public PQueue {
    vector<int> myQueueHV;
public:
    PQueueHV();
    bool isEmpty();
    void push(int x);
    int min();
    int pop();

    void bubbleUp(int ndx);
    void bubbleDown(int ndx);
};


#endif //ALGORITHMSPROJECT1_PQUEUEHV_H
