#include <iostream>
using namespace std;

int main() {
    // static_cast
    double pi = 3.1415926;
    cout<<"int pi = "<<static_cast<int>(pi)<<endl;

    int nah = 10;
    cout<<"double nah: "<<static_cast<double>(nah)<<endl;

    // const_cast
    const int var = 100;
    int* varMemAddr;
    // error: assigning to 'int *' from incompatible type 'const int *'
    // varMemAddr = &var;  

    // ???
    // const_cast<int>(varMemAddr) = &var;

    short int x = 0x00;
    short int y = 0x00;
    cout << (x | y) << endl;

    cout << (x && y ) << endl;
}