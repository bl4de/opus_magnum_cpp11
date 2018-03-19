#include "Tcar.h"

std::string Tcar::manufacturer = "Audi";
int Tcar::stock = 0;

Tcar::Tcar(std::string md) {
  model = md;
  Tcar::stock++;
}

std::string Tcar::getDescription() { return Tcar::manufacturer + " " + model; }

Tcar::~Tcar() {
  std::cout << "\n\tobject " << getDescription() << " deleted!\n\n";
}
