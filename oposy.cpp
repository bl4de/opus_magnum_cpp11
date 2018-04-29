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

// displays value of passed variable; with message
void valueOf(int *var, std::string msg = "value of") {
  std::cout << msg << ": " << (*var) << std::endl;
}

void valueOf(const char *var, std::string msg = "value of") {
  std::cout << msg << ": " << var << std::endl;
}

// displays value of passed variable; with message
void valueOf(std::string var, std::string msg = "value of") {
  std::cout << msg << ": " << var << std::endl;
}

// shows memory address of variable
void memoryOf(int *var, std::string msg = "memory address") {
  std::cout << msg << ": " << var << std::endl;
}
} // namespace oposy

#endif