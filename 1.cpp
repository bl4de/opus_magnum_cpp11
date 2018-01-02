#include <iostream>
using namespace std;

int main() {
    // using continue pront only odd numbers
    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0) continue;
        cout<<i<<endl;
    }
}