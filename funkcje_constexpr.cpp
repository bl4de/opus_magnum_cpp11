#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

constexpr int fn(int x, int y) { return x * y; }

int main() {
  constexpr int x = 20;
  constexpr int y = 20;

  constexpr int wyn = fn(x, y);

  valueOf(wyn);

  int z = 23;
  int r = 44;

  valueOf(fn(z, r));
}
