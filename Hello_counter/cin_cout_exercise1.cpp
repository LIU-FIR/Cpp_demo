#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace std;

// void cout_hello()
// {
//     int number;
//     cout << "hello,Cpp" << endl;
//     cout << "Input a number:" << endl;
//     cin >> number;
//     cout << hex << uppercase << number;
// }

int main()
{
    // printf("hello\n");
    // cout_hello();
    char ch;
    string word;
    cout << "Let's go! Press the return key: ";
    cin.get(ch);
    cout << "Enter a word containing "
         << "three characters at most: ";
    cin >> setw(3) >> word;
    cout <<"Your input: " << word << endl;
    return 0;    
    // return 0;
}