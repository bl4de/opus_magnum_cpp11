#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

int main() { 
    int t[] = {1, 2, 3, 4, 5, 6, 7}; 
    int *wsk = nullptr;

    wsk = t;

    while (*wsk > 0) {
        valueOf(wsk++);
    }    
}