#ifndef TCAR_H
#define TCAR_H

#include <iostream>
#include <string>

class Tcar {
        std::string manufacturer;
        std::string model;

    public:
        Tcar(std::string, std::string);
        std::string getDescription();
};
#endif