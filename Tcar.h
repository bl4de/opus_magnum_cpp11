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
        int showStock();
        ~Tcar();
        std::string getDescription();
};
#endif