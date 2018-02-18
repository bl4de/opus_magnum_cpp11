#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

void podw(int tab[], int s) {
    for (int i = 0; i < s; i++) {
        tab[i] *= tab[i];
    }
}

int main() {
    constexpr int tabSize = 5;

    int tab[tabSize]{1,2,3,4,5};

    podw(tab, tabSize);

    for (int i = 0; i < tabSize; i++) {
        valueOf(tab[i]);
        memoryOf(&tab[i]);
    }
}