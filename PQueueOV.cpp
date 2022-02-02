//
// Created by Benjamin Milligan on 9/9/18.
//
#include <iostream>
#include "PQueueOV.h"
using namespace std;

PQueueOV::PQueueOV(){

}

bool PQueueOV::isEmpty(){
    bool flag = false;
    if(this->myQueueOV.empty()){
        flag = true;
    }
    return flag;
}

void PQueueOV::push(int x){
    if(this->myQueueOV.empty()){
        this->myQueueOV.push_back(x);
    }else{
        vector<int>::iterator itr;
        for(itr = myQueueOV.begin(); itr != myQueueOV.end(); itr++){
            if(x < *itr){
                break;
            }
        }
        this->myQueueOV.insert(itr, x);
    }
}

int PQueueOV::min(){
    return this->myQueueOV[0];
}

int PQueueOV::pop(){
    vector<int>::iterator itr = this->myQueueOV.begin();
    int popped = *itr;
    myQueueOV.erase(itr);
    return popped;
}