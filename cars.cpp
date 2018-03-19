#include "Tcar.h"
#include "oposy.cpp"

void showCar(Tcar* audi) {
  static int licznik = 1;
  oposy::valueOf(audi->getDescription());
  std::cout << " licznik wysw.: " << licznik++ << "\n";
}

Tcar ada("Audi", "A4 B5 1.8 ADR 125KM");

int main() {

  showCar(&ada);

  {
    Tcar audia4{"Audi", "A4 1.8 TFSI"};
    Tcar ada("Audi", "A4 B5 1.8 ADR 125KM");
    showCar(&audia4);

    Tcar audirs5{"Audi", "RS5"};
    Tcar *myaudi;
    myaudi = &audirs5;

    showCar(myaudi);
    showCar(&audirs5);
    showCar(&::ada);
    showCar(&ada);
  }
}