#include <iostream>
// #include "counter.h"
// #include <iomanip>
// #include <stdio.h>
// #include <string>
using namespace std;


void counterA(int n)
{
    
    for (int number=0; number < n; cout <<"tickA = " << number++ << endl)
    {
        // blank statement;
    }
    
}

void counterB(int n)
{
    
    for (int number=0; number < n; cout << "tickB = " << ++number << endl)
    {
        // blank statement;
    }
    
}

