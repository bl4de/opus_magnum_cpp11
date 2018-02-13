#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

constexpr int fn(int, int);

int main() {
  constexpr int x = 20;
  constexpr int y = 20;

  int wyn = fn(x, y);

  valueOf(wyn);
}

constexpr int fn(int x, int y) { return x * y; }
