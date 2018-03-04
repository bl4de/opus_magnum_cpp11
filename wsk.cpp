#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

int main() {
    const int x = 10;
    const int *wskx = &x;

    // *wskx = 20;

    valueOf(x);
    valueOf(*wskx);
}