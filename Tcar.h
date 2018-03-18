#ifndef Tcar_h
#define Tcar_h

#include <iostream>
#include <string>

class Tcar {
        std::string manufacturer;
        std::string model;

    public:
        Tcar(std::string, std::string);
        ~Tcar();
        std::string getDescription();
};
#endif