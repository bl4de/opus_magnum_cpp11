#include <iostream>
using namespace std;

int main() {
    typedef double vars;
    using something = int;

    constexpr something dwiedwojki = 22;
    volatile something jestniema = 32;
    using wsp = int;
    
    vars x =10.5;
    vars y = 12.0;
    wsp z = 20;

    cout<<(((x*y)/z) * dwiedwojki)/jestniema
    <<endl;
}