//
// Created by Benjamin Milligan on 9/9/18.
//

#ifndef ALGORITHMSPROJECT1_MYTIMER_H
#define ALGORITHMSPROJECT1_MYTIMER_H

#include <ctime>

using namespace std;

class MyTimer {

public:
    MyTimer() {
        elapsed = 0.0;
        started =  false;
    }

    // start the clock

    void start() {
        if (!started)
        {
            started = true;
            cur_start_time = clock();
        }

    }

    // stop the clock, add the elasped time
    // notice that time only added if timer has been started;

    void stop() {
        double e1 = double(clock() - cur_start_time);
        if (started)
        {
            elapsed += e1;
            started = false;
        }
    }

    // output the elasped time (in milliseconds)

    double elapsedTime() {
        return (elapsed / CLOCKS_PER_SEC) * 1000.0;
    }

    // reset the timer

    void reset() {
        started = false;
        elapsed = 0.0;
    }


private:
    double elapsed;
    bool started;
    clock_t cur_start_time;
};


#endif //ALGORITHMSPROJECT1_MYTIMER_H
