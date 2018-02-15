#include <iostream>
#include <string>

#ifndef OPOSY
#define OPOSY

namespace oposy {
// displays message
void message(std::string msg) { std::cout << msg << std::endl; }

// displays value of passed variable; with message
void valueOf(int var, std::string msg = "value of") {
  std::cout << msg << ": " << var << std::endl;
}
} // namespace oposy

#endif