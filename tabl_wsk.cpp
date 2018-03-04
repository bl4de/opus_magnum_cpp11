#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

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
  while ((current = stops[i++])) {
    cout << current << "\n";
  }

  //   for (int i = 0; i < 19; i++) {
  //     current = stops[i];
  //     cout << current << "\n";
  //   }
}