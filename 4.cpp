#include <iostream>
using namespace std;

namespace my_namespace {
        int x;
        char y;
    }

int main() {
    int x = 30;
    my_namespace::x = 20;

    cout<<my_namespace::x + x;
}