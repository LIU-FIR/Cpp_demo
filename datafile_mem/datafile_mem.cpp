#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string fname = "d:\\GPU_test_data\\BaselineACCFFT\\sat_samples_256B.bin";
    cout << "Read xiaoyun's file to memory" << endl;
    ifstream fin(fname, ios::binary);
    cout << "open status = " << fin.is_open() << endl;
    char number[4];
    fin.read(number, 4);
    cout << int(number[0]) << endl;
    cout << int(number[1]) << endl;
    cout << int(number[2]) << endl;
    cout << int(number[3]) << endl;
    fin.close();
    cout << "open status = " << fin.is_open() << endl;
    return 0;
}