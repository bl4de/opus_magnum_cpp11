#include "Tcar.h"
#include "oposy.cpp"

int main() {
    Tcar audia4;
    audia4.setManufacturer("Audi");
    audia4.setModel("A4 1.8 TFSI");

    oposy::valueOf(audia4.getDescription());

    Tcar audirs5;
    Tcar *myaudi;

    myaudi = &audirs5;
    myaudi->setManufacturer("Audi");
    myaudi->setModel("RS5");

    oposy::valueOf(myaudi->getDescription());
}