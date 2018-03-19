#include "Tcar.h"

Tcar::Tcar(std::string mn, std::string md) {
  manufacturer = mn;
  model = md;
}

std::string Tcar::getDescription() { return manufacturer + " " + model; }

Tcar::~Tcar() { std::cout << "\n\tobject " << getDescription() << " deleted!\n\n"; }
