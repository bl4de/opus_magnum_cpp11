#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

class Car {
    private:

    public:
        string manufacturer;
        string model;

        string getManufacturer();
};

string Car::getManufacturer() {
        return this.manufacturer;
    }
int main() {
    
}