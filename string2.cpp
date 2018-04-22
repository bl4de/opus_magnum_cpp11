#include <iostream>
#include <string>
using namespace std;

int main() {
  string test = "Pierwszy string";
  string inny = "Jakis inny";
  cout << test.at(2) << endl;

  test.reserve(20);
  cout << test.size() << endl;

  test.resize(100);
  cout << test.size() << endl;
  cout << test[43] << endl;

  string wyj = "Wyjatek";
  try {
    for (unsigned int p = 0; p < wyj.length() + 3; p++) {
      cout << "znak z pozycji " << p << " to : " << wyj.at(p) << endl;
    }
  } catch (std::out_of_range) {
    cout << "pozycja poza stringiem!" << endl;
  }
}