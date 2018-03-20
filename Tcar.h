#ifndef Tcar_h
#define Tcar_h

#include <iostream>
#include <string>

class Tcar {
  static std::string manufacturer;
  static int stock;
  std::string model;

public:
  Tcar(std::string);
  ~Tcar();
  std::string getDescription() const;

  static int showStock() {
    std::cout << "\nwypordukowanych egzemplarzy: " << (stock++)
              << std::endl;
    return Tcar::stock;
  }
};
#endif