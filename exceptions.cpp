#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

struct Texception_wrong_params {};

int sum(int x, int y) {
  if (x > 0 && y > 0) {
    return x + y;
  } else {
    Texception_wrong_params __exception;
    throw __exception;
  }
}

int main() {
  try {
    cout << "sum of 10 and 20: " << sum(10, 20) << endl;
    cout << "sum of 40 and 4: " << sum(40, 4) << endl;
    cout << "sum of -32 and 11: " << sum(-32, 11) << endl;
  } catch (Texception_wrong_params e) {
    cout << "Exception Texception_wrong_params was thrown :/" << endl;
  }

  cout << "Are we done yet?\n\n";
}