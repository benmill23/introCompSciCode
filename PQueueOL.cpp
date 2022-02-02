//
// Created by Benjamin Milligan on 9/9/18.
//

#include "PQueueOL.h"

PQueueOL::PQueueOL(){

}

bool PQueueOL::isEmpty(){
    if(this->myQueueOL.empty()){
        return true;
    }else{
        return false;
    }
}

void PQueueOL::push(int x){
    if(this->myQueueOL.empty()){
        this->myQueueOL.push_back(x);
    }else{
        list<int>::iterator itr;
        for(itr = myQueueOL.begin(); itr != myQueueOL.end(); itr++){
            if(x < *itr){
                break;
            }
        }
        this->myQueueOL.insert(itr, x);
    }
}

int PQueueOL::min(){
    list<int>::iterator itr = myQueueOL.begin();
    return *itr;
}

int PQueueOL::pop(){
    list<int>::iterator itr = myQueueOL.begin();
    int popped = *itr;
    this->myQueueOL.erase(itr);
    return popped;
}