#include "Tcar.h"
#include "oposy.cpp"

void showCar(Tcar &audi) {
    oposy::valueOf(audi.getDescription());
}

int main() {
    Tcar audia4;
    audia4.setManufacturer("Audi");
    audia4.setModel("A4 1.8 TFSI");

    showCar(audia4);

    Tcar audirs5;
    Tcar *myaudi;

    myaudi = &audirs5;
    myaudi->setManufacturer("Audi");
    myaudi->setModel("RS5");

    showCar(*myaudi);
}