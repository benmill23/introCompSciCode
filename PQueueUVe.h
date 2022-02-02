//
// Created by Benjamin Milligan on 9/9/18.
//

#ifndef ALGORITHMSPROJECT1_PQUEUEUVE_H
#define ALGORITHMSPROJECT1_PQUEUEUVE_H

#include "PQueue.h"

class PQueueUVe : public PQueue {
    int least;
    vector<int> myQueueUVe;
public:
    PQueueUVe();
    bool isEmpty();
    void push(int x);
    int min();
    int pop();
};

#endif //ALGORITHMSPROJECT1_PQUEUEUVE_H
