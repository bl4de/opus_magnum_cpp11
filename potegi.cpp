#include <iostream>
using namespace std;

auto pow(int podst, int wykl) -> decltype(podst) {
    int wynik = podst;
    while (--wykl) wynik *= podst;
    return wynik;
}

int main() {
    int podst, wykl = 1;

    cout<<"podaj podstawe: ";
    cin>>podst;
    cout<<"podaj wykladnik: ";
    cin>>wykl;

    auto wynik = pow(podst, wykl);

    cout<<"wynikiem podniesienia "<<podst<<" do potegi "<<wykl;
    cout<<" jest: " << wynik << endl;

}