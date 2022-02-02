//
// Created by Benjamin Milligan on 9/9/18.
//

#include "PQueueHV.h"


PQueueHV::PQueueHV(){
    //make_heap(this->myQueueHV.begin(), this->myQueueHV.end(), compare);
}

bool PQueueHV::isEmpty(){
    if(this->myQueueHV.empty()){
        return true;
    }else{
        return false;
    }
}

void PQueueHV::push(int x){
    this->myQueueHV.push_back(x);
    this->bubbleUp(this->myQueueHV.size()-1);
}

int PQueueHV::min(){
    return this->myQueueHV[0];
}

int PQueueHV::pop(){
    if(this->myQueueHV.size() != 0){
        vector<int>::iterator itr = this->myQueueHV.begin();
        int a = *itr;
        this->myQueueHV.erase(itr);
        //make_heap(this->myQueueHV.begin(), this->myQueueHV.end(), compare);
        this->bubbleDown(0);
        return a;
        if(this->myQueueHV.size() > 0){
            this->bubbleDown(0);
        }
    }
}

//bool PQueueHV::compare(int x, int y){
//    return x > y;
//}

void PQueueHV::bubbleUp(int ndx){
    int parent = (ndx - 1) / 2;
    if (parent < 1){
        return;
    }

    if(this->myQueueHV[ndx] <
       this->myQueueHV[parent]){
        swap(this->myQueueHV[parent], this->myQueueHV[ndx]);
        bubbleUp(parent);
    }
}

void PQueueHV::bubbleDown(int ndx){
    //min value has to end up at beginning
    int left = (2*ndx)+1;
    int right = (2*ndx)+2;

    if(left < this->myQueueHV.size()){
        int lesser = left;

        if((right < this->myQueueHV.size())
           &&(this->myQueueHV[right]
              < this->myQueueHV[left])){
            lesser = right;
        }
        if(this->myQueueHV[lesser]
           < this->myQueueHV[ndx]){
            swap(this->myQueueHV[lesser], this->myQueueHV[ndx]);
            bubbleDown(lesser);
        }
    }
}