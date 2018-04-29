#include <iostream>
#include <string>

#include "oposy.cpp"

using namespace std;
using namespace oposy;

int main() {
  string text = "Let me introduce myself, my name is Korg";

  try {
    string _name = text.substr(text.find("Korg", 0), 4);
    cout << "_name = " << _name << endl;
    oposy::valueOf(text.data());
  } catch (std::out_of_range &e) {
    cout << "Exception: " << e.what() << endl;
  }

  try {
    string erased = text.erase(text.find("Let"), 10);
    cout << erased << endl;
    cout << *text.data() << endl;
  } catch (std::out_of_range &e) {
    cout << "Exception: " << e.what() << endl;
  }

  string _newName = "I am Thor, Son of Odin";
  text.insert(12, _newName);
  cout << *text.data() << endl;
  cout << text << endl;
  cout << *text.data() << endl;
  text.replace(0, text.find("I am"), "");
  cout << text << endl;
  cout << *text.data() << endl;
  text.replace(text.find("f, "), text.length(), ", God of Thunder");
  cout << text << endl;
  cout << *text.data() << endl;
}