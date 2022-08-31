#include <iostream>
#include "counter.h"
// #include <iomanip>
// #include <stdio.h>
// #include <string>
using namespace std;

void counter::set_TickInterval(int tick_interval)
{
    this->tick_interval = tick_interval;
}

void counter::set_TickStart(int tick_start)
{
    this->tick_start = tick_start;
}

void counter::set_TickTimes(int tick_times)
{
    this->tick_times = tick_times;
}

counter::counter(int tick_start, int tick_interval, int tick_times)
{
    this->tick_start = tick_start;
    this->tick_interval = tick_interval;
    this->tick_times = tick_times;
}

counter::~counter()
{
    cout << "Object destroyed." << endl;
}

int counter::get_TickTimes()
{
    return this->tick_times;
}

int counter::get_TickStart()
{
    return this->tick_start;
}

int counter::get_TickInterval()
{
    return this->tick_interval;
}

void counter::counts()
{
    for (int number = this->tick_start; number < this->tick_start + this->tick_times * this->tick_interval;
         number += tick_interval)
        cout << "tick = " << number << endl;
    ;
}

void counterA(int n)
{

    for (int number = 0; number < n; cout << "tickA = " << number++ << endl)
    {
        // blank statement;
    }
}

void counterB(int n)
{

    for (int number = 0; number < n; cout << "tickB = " << ++number << endl)
    {
        // blank statement;
    }
}
