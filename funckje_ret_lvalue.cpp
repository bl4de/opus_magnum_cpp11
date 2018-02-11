#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

int globalny_jedynkowy = 25;
int globalny_inny = 77;

int f_wartosc(int ktory) {
//   int lokalny = 4;
  // return lokalny
  if (ktory == 1)
    return globalny_jedynkowy;
  return globalny_inny;
}

int &f_ref_lwartosci(int ktory) {
//   int lokalny = 4;
  // return lokalny
  if (ktory == 1)
    return globalny_jedynkowy;
  return globalny_inny;
}

void wypisz(string txt, int a) {
  cout << txt;
  if (a)
    cout << a << ", ";
  valueOf(globalny_jedynkowy, "value of globalny_jedynkowy");
  valueOf(globalny_inny, "value of globalny_inny");
}

int main() {
  int n{0};

  n = f_wartosc(1);
  wypisz("rezultat= ", n);

  n = f_wartosc(6);
  wypisz("rezultat= ", n);


  n = f_ref_lwartosci(1);
  wypisz("Rrezultat= ", n);

  n = f_ref_lwartosci(6);
  wypisz("Rrezultat= ", n);

  f_ref_lwartosci(1) = 5000;
  wypisz("rwartosc rezultat= ", n);

  f_ref_lwartosci(6) = 8000;
  wypisz("rwartosc rezultat= ", n);


  n = f_ref_lwartosci(1);
  wypisz("Rrezultat= ", n);

  n = f_ref_lwartosci(6);
  wypisz("Rrezultat= ", n);
}