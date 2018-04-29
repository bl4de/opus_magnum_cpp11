#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

int main() {
  string text = "Let me introduce myself, my name is Korg";
  try {
    string _name = text.substr(text.find("Korg",0), 4);
    cout << "_name = " << _name << endl;
  } catch (std::out_of_range &e) {
    cout << "Exception: " << e.what() << endl;
  }
}