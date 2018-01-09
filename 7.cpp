#include <iostream>
using namespace std;

int main() {
    typedef double vars_t;
    using something_type = int;

    constexpr something_type dwiedwojki = 22;
    volatile something_type jestniema = 32;
    using wsp = int;
    
    vars_t x =10.5;
    vars_t y = 12.0;
    wsp z = 20;

    cout<<(((x*y)/z) * dwiedwojki)/jestniema
    <<endl;
}