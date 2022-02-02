#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "MyTimer.h"
#include "PQueue.h"
#include "PQueueUV.h"
#include "PQueueUVe.h"
#include "PQueueOV.h"
#include "PQueueOL.h"
#include "PQueueHV.h"
#include "PQueuePQ.h"

using namespace std;

int main() {
    //data abstraction
    int choice, k;
    MyTimer mt;


    srand(time(NULL));

    cout << "Pick which type of queue you would like to use:" << endl;
    cout << "1. unordered vector" << endl;
    cout << "2. unordered vector with an integer to hold min" << endl;
    cout << "3. ordered vector" << endl;
    cout << "4. ordered list" << endl;
    cout << "5. heap" << endl;
    cout << "6. priority queue" << endl;
    cin >> choice;
    cout << endl;
    cout << "How many integers would you like to insert?" << endl;
    cin >> k;
    cout << endl;

    //create the parent object
    PQueue *a;

    //create all the objects and depending on what they choose
    switch(choice) {
        case 1:
            a = new PQueueUV;
        case 2:
            a = new PQueueUVe;
        case 3:
            a = new PQueueOV;
        case 4:
            a = new PQueueOL;
        case 5:
            a = new PQueueHV;
        case 6:
            a = new PQueuePQ;
    }

    // generate k random numbers from
    for(int i = 0; i < k; i++){
        int x = (rand() % RAND_MAX);
        //start the timer
        mt.start();
        //insert it into the queue
        a->push(x);
        mt.stop();
    }
    cout << "push(milli): " << mt.elapsedTime() << endl;
    cout << "push(seconds): " << mt.elapsedTime()/1000 << endl;

    mt.reset();
    for(int i = 0; i < k; i++){
        mt.start();
        a->pop();
        mt.stop();
    }
    cout << "pop(milli): " << mt.elapsedTime() << endl;
    cout << "pop(seconds): " << mt.elapsedTime()/1000 << endl;

    return 0;
}