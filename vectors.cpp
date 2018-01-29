#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<string> fitgurls = {"Natalia Gacka", "Sylwia Szostak",
                             "Kasia Dziurska"};
  string tmp;
  cout << "\n" + fitgurls[0];

  tmp = fitgurls[0];
  fitgurls[0] = fitgurls[2];
  fitgurls[2] = tmp;

  fitgurls.push_back("Lauren Drain");

  for (int i = 0; i < fitgurls.size(); i++) {
    cout << "\nFitGurl " << i << " : " << fitgurls[i];
  }
  cout << endl;

  for (auto girl : fitgurls) {
    cout << "\nFitGurl " << i << " : " << fitgurls[i];
  }

  cout << endl;
  exit(0);
}