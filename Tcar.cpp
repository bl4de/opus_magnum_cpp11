#include "Tcar.h"

void Tcar::setManufacturer(std::string m) {
    manufacturer = m;
}

void Tcar::setModel(std::string m) {
    model = m;
}

std::string Tcar::getDescription() {
    return manufacturer + " " + model + "\n";
}

