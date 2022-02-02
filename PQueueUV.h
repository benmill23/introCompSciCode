//
// Created by Benjamin Milligan on 9/9/18.
//

#ifndef ALGORITHMSPROJECT1_PQUEUEUV_H
#define ALGORITHMSPROJECT1_PQUEUEUV_H

#include <vector>
#include "PQueue.h"

using namespace std;

class PQueueUV : public PQueue {
    vector<int> myQueueUV;
public:
    PQueueUV();
    bool isEmpty();
    void push(int x);
    int min();
    int pop();
};



#endif //ALGORITHMSPROJECT1_PQUEUEUV_H
