#ifndef _COUNTER_H_
#define _COUNTER_H_
// #include <iostream>
// #include <iomanip>
// #include <stdio.h>
// #include <string>
using namespace std;

class counter
{
    int tick_times, tick_interval;
    int tick_start;

public:
    void set_TickTimes(int);
    void set_TickInterval(int);
    void set_TickStart(int);

    counter(int, int, int);
    ~counter();
    void counts();
    int get_TickTimes();
    int get_TickInterval();
    int get_TickStart();
};

void counterA(int n);

void counterB(int n);
#endif
