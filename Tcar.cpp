#include "Tcar.h"

int Tcar::stock = 0;

Tcar::Tcar(std::string md) {
  model = md;
  Tcar::stock++;
}

std::string Tcar::getDescription() const {
  return Tcar::manufacturer + " " + model;
}

Tcar::~Tcar() {
  std::cout << "\n\tobject " << getDescription() << " deleted!\n\n";
}
