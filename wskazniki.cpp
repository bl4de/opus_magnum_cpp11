#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

char *producent() {
  char *wsk;
  wsk = new char;
  return wsk;
}

int main() {
  int t[]{1, 2, 3, 4, 5, 6, 7};
  int *wsk = nullptr;

  wsk = &t[0]; // wsk = t

  while (*wsk > 0) {
    cout << wsk << endl;
    valueOf(wsk++);
  }

  char *w1 = producent();
  *w1 = 'X';

  cout << w1 << ": " << (*w1) << endl;
}