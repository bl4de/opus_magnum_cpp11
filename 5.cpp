#include <iostream>
using namespace std;

int main() {
    int option;
    cout<<"select option: ";
    cin>>option;

    const int selected {option};

    cout<<"value of selected option: "<<selected;    
}