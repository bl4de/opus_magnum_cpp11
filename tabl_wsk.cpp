#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

void przedz_tab(const char tab[]) {
  int i = 0;
  while (tab[i]) {
    cout << tab[i++] << "-";
  }
}

void przedz_wsk(const char *w) {
  while (*w) {
    cout << *(w++) << "-";
  }
}

int main() {
  const char *stops[]{"Parnell",      "OConnel Upper",      "Westmoreland",
                      "Dawson",       "St. Stephens Green", "Dundrum",
                      "Ballaly",      "Kilmacud",           "Stilorgan",
                      "Sandyford",    "Central Park",       "Glencaire",
                      "The Gallops",  "Leopardstown",       "Ballyogan Wood",
                      "Carrickmines", "Laughanstown",       "Cherrywood",
                      "Brides Glen"};

  const char *current;

  cout << "Green Line LUAS Stops:\n";
  int i = 0;
  while ((current = stops[i])) {
    cout << "\n" << current;
    przedz_tab(stops[i]);
    przedz_wsk(stops[i]);
    i++;
  }

  //   for (int i = 0; i < 19; i++) {
  //     current = stops[i];
  //     cout << current << "\n";
  //   }
}