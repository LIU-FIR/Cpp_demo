#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string fname = "c:\\udp-pipeline\\real_data\\sat_samples_256B.bin";
    cout << "Read xiaoyun's file to memory" << endl;
    ifstream fin(fname, ios::binary);
    cout << "open status = " << fin.is_open() << endl;
    int numint;
    // short int numshint;
    // char number[4];
    // fin.read((char *) &numint,sizeof(int));
    char *ptr;
    ptr = (char *) &numint;
    fin.read(ptr, sizeof(int));
    // fin.read((char *) &numshint,sizeof(short int));
    // cout << int(number[0]) << endl;
    // cout << int(number[1]) << endl;
    // cout << int(number[2]) << endl;
    // cout << int(number[3]) << endl;
    cout << numint << endl;
    cout << *((short int *)ptr) <<endl;
    // cout << int(*(ptr+1)) <<endl;
    // cout << int(*(ptr+2)) <<endl;
    // cout << int(*(ptr+3)) <<endl;
    // cout << numshint << endl;
    fin.close();
    cout << "open status = " << fin.is_open() << endl;
    return 0;
}