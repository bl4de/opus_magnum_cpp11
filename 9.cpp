#include <iostream>
using namespace std;

int main() {
  int x = 20;
  decltype(x) y = 12;

  enum class audi { engine = 1, gearbox = 2 };

  audi Typ_silnika = audi::engine;

  decltype(audi::gearbox) Typ_skrzyni = audi::gearbox;

  cout << static_cast<int>(Typ_silnika) << endl
       << static_cast<int>(Typ_skrzyni) << endl;
}