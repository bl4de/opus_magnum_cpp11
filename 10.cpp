#include <iostream>
using namespace std;

int foo() {
  int x;
  cout << "x in foo(): " << x << endl;
  cout << "address in memory of x: " << &x << endl;
  return x;
}

int main() {
  int x;
  cout << "global: " << x << endl;

  int z = foo();
  cout << "z (x from foo(): " << z << endl;
}