#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

class Tcar {
    private:
        string manufacturer {"Audi"};
    public:
        
        string model;

        string getFullName() {
            return manufacturer + " " + model;
        }
};

// string Tcar::getFullName() {
//     return manufacturer + " " + model;
// }

int main() {
    Tcar a4;
    a4.model = "A4";
    valueOf(a4.getFullName());
    valueOf(sizeof(a4));
    Tcar rs5;
    Tcar *myaudi;

    myaudi = &rs5;
    myaudi->model = "RS 5";
    string fullname = myaudi->getFullName();

    valueOf(fullname);
}