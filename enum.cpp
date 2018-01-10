#include <iostream>
using namespace std;

enum class Taudi_rs_car {
    rs5 = 1,
    s4 = 2,
    rs4 = 3,
    a4 = 4
};

int main() {
    int selection;
    cout<<"select (1 - RS5, 2 - S4 B5, 3 - RS4 B7): ";
    cin>>selection;

    switch (selection) {
        case static_cast<int>(Taudi_rs_car::rs4):
            cout<<"Great choice!!! V8, 450HP, 0-100km/h in 4.7 sec";
            break;
        case static_cast<int>(Taudi_rs_car::rs5):
            cout<<"Awesome choice!!! V8, 450HP, 0-100km/h in 4.8 sec";
            break;
        case static_cast<int>(Taudi_rs_car::s4):
            cout<<"Classy one! 2.7 V6 Biturbo, 265KM, 0-100km/h in 5.6 sec";
            break;
        default:
            cout<<"No choice, take A4!";
            selection = static_cast<int>(Taudi_rs_car::a4);
            break;
    }

    cout<<endl<<"Take your "<<selection<<" and go for a ride!"<<endl;

}