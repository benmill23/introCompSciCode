//
// Created by Benjamin Milligan on 9/9/18.
//

#ifndef ALGORITHMSPROJECT1_PQUEUEPQ_H
#define ALGORITHMSPROJECT1_PQUEUEPQ_H


#include <queue>
#include "PQueue.h"

using namespace std;

class PQueuePQ : public PQueue {
    priority_queue<int, vector<int>, greater<int>> myQueuePQ;
public:
    PQueuePQ();
    bool isEmpty();
    void push(int x);
    int min();
    int pop();
};

#endif //ALGORITHMSPROJECT1_PQUEUEPQ_H
