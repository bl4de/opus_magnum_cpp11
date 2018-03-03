#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

int main() {
  int rozm{};
  message("podaj rozmiar tablicy: ");
  cin >> rozm;

  int *tab = new int[rozm];
  auto *wsk = tab;
  int x = 0;

  //   valueOf(rozm);
  int r = rozm;
  while (r--) {
    *wsk++ = ++x;
  }

  for (int i = 0; i < rozm; i++) {
    valueOf(tab[i]);
  }

  delete tab;
}