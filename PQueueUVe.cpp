//
// Created by Benjamin Milligan on 9/9/18.
//

#include "PQueueUVe.h"
#include <iostream>
using namespace std;

PQueueUVe::PQueueUVe(){

}

bool PQueueUVe::isEmpty(){
    bool flag = false;
    if(this->myQueueUVe.empty()){
        flag = true;
    }
    return flag;
}

void PQueueUVe::push(int x){
    this->myQueueUVe.push_back(x);
    if(x < this->least){
        this->least = x;
    }
}

int PQueueUVe::min(){
    return this->least;
}

int PQueueUVe::pop(){
    int popped = min();
    int pos = 0;
    for(int i = 0; i < this->myQueueUVe.size(); i++){
        if(myQueueUVe[i] == popped){
            pos = i;
            break;
        }
    }
    this->myQueueUVe.erase(this->myQueueUVe.begin()+pos);

    if(!isEmpty()){
        this->least = this->myQueueUVe[0];
        for(int i = 0; i < this->myQueueUVe.size(); i++){
            if(this->least > this->myQueueUVe[i]){
                this->least = this->myQueueUVe[i];
            }
        }
    }
    return popped;
}