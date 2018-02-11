#include "oposy.cpp"
#include <iostream>
using namespace std;
using namespace oposy;

void one(void);
void two(void);

int main() {
  one();
  one();
  two();
  one();
  two();
  one();
  one();
  two();
  one();
  two();
  one();
  one();
  two();
  one();
  two();
  message("Done!");
}

void one(void) {
  static int counter;
  //   int counter;
  counter++;
  cout << "one() called " << counter << " times" << endl;
}

void two(void) {
  static int counter;
  counter++;
  cout << "two() called " << counter << " times" << endl;
}