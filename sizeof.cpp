#include <iostream>
using namespace std;

static_assert(sizeof(int)==4, "ERROR: This architecture has different size of INT. INT size required: 4 bytes (32 bits)");

int main() {
  cout<<"sizeof char: "<<sizeof(char)<<endl;
  cout<<"sizeof short int: "<<sizeof(short int)<<endl;
  cout<<"sizeof int: "<<sizeof(int)<<endl;
  cout<<"sizeof long: "<<sizeof(long)<<endl;
  cout<<"sizeof float: "<<sizeof(float)<<endl;
  cout<<"sizeof double: "<<sizeof(double)<<endl;
  cout<<"sizeof long double: "<<sizeof(long double)<<endl;
}