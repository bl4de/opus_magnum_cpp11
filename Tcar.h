#ifndef TCAR_H
#define TCAR_H

#include <iostream>
#include <string>

class Tcar {
        std::string manufacturer;
        std::string model;

    public:
        void setManufacturer(std::string);
        void setModel(std::string);

        std::string getDescription();
};
#endif