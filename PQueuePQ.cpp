//
// Created by Benjamin Milligan on 9/9/18.
//

#include "PQueuePQ.h"


PQueuePQ::PQueuePQ(){

}

bool PQueuePQ::isEmpty(){
    bool flag = false;
    if(this->myQueuePQ.empty()){

    }
    return flag;
}

void PQueuePQ::push(int x){
    this->myQueuePQ.push(x);
}

int PQueuePQ::min(){
    return this->myQueuePQ.top();
}

int PQueuePQ::pop(){
    int popped = this->myQueuePQ.top();
    this->myQueuePQ.pop();
    return popped;
}