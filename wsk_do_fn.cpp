#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

int foo() {
  message("foo() called");
  return 1;
}

int bar() {
  message("bar() called");
  return 2;
}

int main() {
  int x = 1;
  valueOf(x);
  int (*wsk)() = nullptr;

  wsk = &foo;

  (*wsk)();
  wsk();
  
  wsk = &bar;
  
  (*wsk)();
  wsk();
}