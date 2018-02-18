#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

void podw(int tab[]) {
    for (int i = 0; i < 5; i++) {
        tab[i] *= tab[i];
    }
}

int main() {
    int tab[5]{1,2,3,4,5};

    podw(tab);

    for (int i = 0; i < 5; i++) {
        valueOf(tab[i]);
        valueOf(&tab[i])
    }
}