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
  std::string getDescription();

  static int showStock() {
    std::cout << "\nwypordukowanych egzemplarzy: " << (Tcar::stock++)
              << std::endl;
  }
};
#endif