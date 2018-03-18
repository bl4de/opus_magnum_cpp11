#include "Tcar.h"
#include "oposy.cpp"

void showCar(Tcar &audi) { oposy::valueOf(audi.getDescription()); }

int main() {
  Tcar audia4{"Audi", "A4 1.8 TFSI"};
  showCar(audia4);

  Tcar audirs5{"Audi", "RS5"};
  Tcar *myaudi;
  myaudi = &audirs5;

  showCar(*myaudi);
}