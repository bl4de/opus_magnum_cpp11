#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

int main() {
  int tabl[2][3] = {{1, 2, 3}, {4, 5, 6}};
  for (int x = 0; x < 2; x++) {
    for (int y = 0; y < 3; y++) {
      valueOf(tabl[x][y]);
    }
  }
}