#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string fname = "c:\\udp-pipeline\\real_data\\sat_samples_256B.bin";
    cout << "Read xiaoyun's file to memory" << endl;
    ifstream fin(fname, ios::binary);
    cout << "open status = " << fin.is_open() << endl;
    // int numint;
    const int read_size = 256;
    char numrd[read_size];
    char data_out[read_size];
    // short int numshint;
    // char number[4];
    // fin.read((char *) &numint,sizeof(int));
    // char *ptr= (char *) &numrd;
    // char *ptr = numrd;
    // char *ptr = &numrd[0];
    char *ptr = begin(numrd);
    fin.read(ptr, sizeof(char)*read_size);
    // fin.read((char *) &numshint,sizeof(short int));

    // cout << numint << endl;
    // for (int k=0; k < read_size; k++)
    //     cout << (int)(*(ptr+k)) <<"~" << k <<endl;

    // cout << numshint << endl;
    cout << int(numrd[0]+2)<<endl;
    cout << int(numrd[0])+2<<endl;
    fin.close();
    memcpy(data_out,numrd,read_size);
    // for (int k=0; k < read_size; k++)
    //     cout << int(data_out[k]) <<"~" << int(numrd[k]) <<endl;
    // cout << "open status = " << fin.is_open() << endl;
    ofstream wfile("c:\\udp-pipeline\\real_data\\test.bin",ios::out|ios::binary);
    wfile.write(data_out,read_size);
    wfile.close();
    return 0;
}