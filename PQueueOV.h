//
// Created by Benjamin Milligan on 9/9/18.
//

#ifndef ALGORITHMSPROJECT1_PQUEUEOV_H
#define ALGORITHMSPROJECT1_PQUEUEOV_H

#include "PQueue.h"

class PQueueOV : public PQueue {
    vector<int> myQueueOV;
public:
    PQueueOV();
    bool isEmpty();
    void push(int x);
    int min();
    int pop();
};


#endif //ALGORITHMSPROJECT1_PQUEUEOV_H
