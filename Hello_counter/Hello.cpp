#include <iostream>
#include "counter.h"
using namespace std;

int main()
{
    cout << "Hello,counter" << endl;
    // counterA(5);
    // counterB(6);
    counter counter_test(1, 5, 10);
    cout << "Tick start: " << counter_test.get_TickStart()
         << ", Tick interval: " << counter_test.get_TickInterval()
         << ", Tick times: " << counter_test.get_TickTimes() << endl;
    counter_test.counts();
    counter_test.set_TickInterval(1);
    counter_test.set_TickStart(0);
    counter_test.set_TickTimes(10);
    cout << "Tick start: " << counter_test.get_TickStart()
         << ", Tick interval: " << counter_test.get_TickInterval()
         << ", Tick times: " << counter_test.get_TickTimes() << endl;
    counter_test.counts();
    return 0;
}