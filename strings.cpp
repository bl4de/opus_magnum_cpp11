#include <iostream>
#include <string>
using namespace std;

int main() {
  string manuf = {"Toyo Tires"};
  string who = ("Girls");

  string toprint = manuf + " " + who;
  char kreska = '-';
  const int ile = toprint.size();
  string linia(ile, kreska);

  cout << linia << endl;
  cout << toprint + "\n";
  cout << linia << endl;
}