//
// Created by Benjamin Milligan on 9/9/18.
//

#include "PQueueUV.h"


PQueueUV::PQueueUV(){

}

bool PQueueUV::isEmpty(){
    bool flag = false;
    if(this->myQueueUV.empty()){
        flag = true;
    }
    return flag;
}

void PQueueUV::push(int x){
    this->myQueueUV.push_back(x);
}

int PQueueUV::min(){
    //parse through the vector and find the min
    int min = this->myQueueUV[0];
    for(int i = 0; i < this->myQueueUV.size(); i++){
        if(this->myQueueUV[i] < min){
            min = this->myQueueUV[i];
        }
    }
    return min;
}

int PQueueUV::pop(){
    //find the min and pop it off the vector
    int min = this->myQueueUV[0];
    int holder = 0;
    for(int i = 0; i < this->myQueueUV.size(); i++){
        if(this->myQueueUV[i] < min){
            min = this->myQueueUV[i];
            holder = i;
        }
    }
    this->myQueueUV.erase(this->myQueueUV.begin()+holder);
    return min;
}