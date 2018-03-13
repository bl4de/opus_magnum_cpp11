#include <iostream>
#include <string>
#include <vector>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

bool czy_nieparzyste_Fcja(int liczba) { return (liczba % 2); }

bool czy_wieksze_niz_9_Fcja(int liczba) { return (liczba > 9); }

using Typwskf = decltype(&czy_nieparzyste_Fcja);

// int przelicz_elementy(vector<int> pojemnik, Typwskf orzecznik)
int przelicz_elementy(vector<int> pojemnik, bool (*orzecznik)(int i)) {
  int licznik_spelniajacych = 0;
  for (int element : pojemnik) {
    if (orzecznik(element)) {
      licznik_spelniajacych++;
    }
  }
  return licznik_spelniajacych;
}

int main() {
  vector<int> v{4, 2, 13, 11, 5, 24, 7};

  int ile = przelicz_elementy(v, &czy_nieparzyste_Fcja);
  valueOf(ile, "nieparzystych: ");

  ile = przelicz_elementy(v, &czy_wieksze_niz_9_Fcja);
  valueOf(ile, "wiekszych od 9: ");
}