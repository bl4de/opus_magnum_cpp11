#include <iostream>
#include <string>
namespace oposy {
void message(std::string msg) { std::cout << msg << std::endl; }

void valueOf(int var, std::string msg = "value of: ") {
  std::cout << msg << ": " << var << std::endl;
}
} // namespace oposy