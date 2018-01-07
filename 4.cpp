#include <iostream>
// using namespace std;
using std::cin;
using std::cout;

namespace my_namespace {
        int x;
        char y;
    }

int main() {
    int x = 30;
    my_namespace::x = 40;


    cout<<my_namespace::x + x;
}