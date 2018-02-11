#include <iostream>
using namespace std;

void fun_przez_wartosc(int wart);
void fun_referencja_Lwartosci(int &przezwisko_lwartosci);
void fun_referen_constLwartosci(const int &przezwisko_stalej_lwartosci);
void fun_referencja_Rwartosci(int &&przezwisko_wart_chwilowej);

void fun_przez_wartosc(int wart) {
  ++wart;
  cout << "A. fun_przez_wartosc odebrala arg. p. wartosc i teraz= " << wart
       << "\n";
}

void fun_referencja_Lwartosci(int &przezwisko_lwartosci) {
  cout << "B. fun_referencja_Lwartosci(" << przezwisko_lwartosci
       << ") odebrala arg. jako ref. lwartosci\n";
  ++przezwisko_lwartosci;
}

void fun_referen_constLwartosci(const int &przezwisko_stalej_lwartosci) {
  cout << "C. fun_referen_constLwartosci(" << przezwisko_stalej_lwartosci
       << ") odebrala arg jako ref. stalej lwartosci\n";
}

int main() {
  // A

  int obj = 40;

  fun_przez_wartosc(obj);
  cout << " main: obj= " << obj << endl;

  fun_przez_wartosc(80 + 1);
  cout << "\n";

  // B
  fun_referencja_Lwartosci(obj);
  cout << " kontrola, w main obj= " << obj << endl;

  // fun_referencja_Lwartosci(80+2);
  /*
  l_r_values.cpp:36:5: error: no matching function for call to
    'fun_referencja_Lwartosci'
  fun_referencja_Lwartosci(80+2);
  ^~~~~~~~~~~~~~~~~~~~~~~~
l_r_values.cpp:15:6: note: candidate function not viable: expects an l-value
    for 1st argument
    */
  cout << "! fun_referencja_Lwartosci(80+2) - niemozliwe wyslanie jej "
          "rwartosci\n\n";

  fun_referen_constLwartosci(obj);
  fun_referen_constLwartosci(80 + 3);

  const int &przezwisko_stalej_lwartosci = (80 + 3);
}