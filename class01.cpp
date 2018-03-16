#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

class Tcar {
    private:

    public:
        string manufacturer;
        string model;

        string getManufacturer();
};

string Tcar::getManufacturer() {
    return manufacturer;
}

int main() {
    Tcar a4;
    valueOf(a4.getManufacturer());
}