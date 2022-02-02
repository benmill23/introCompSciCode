//
// Created by Benjamin Milligan on 9/9/18.
//

#ifndef ALGORITHMSPROJECT1_PQUEUE_H
#define ALGORITHMSPROJECT1_PQUEUE_H

#include <vector>

using namespace std;

class PQueue {
public:
    PQueue(){};
    virtual bool isEmpty() = 0;
    virtual void push(int x) = 0;
    virtual int min() = 0;
    virtual int pop() = 0;
};


#endif //ALGORITHMSPROJECT1_PQUEUE_H
