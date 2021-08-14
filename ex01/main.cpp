#include "iter.hpp"

void print_s(std::string const & s) {
    std::cout << s << "|";
}

void print_i(int const & i) {
    std::cout << i << "|";
}

int main( void ) { 
    // int i[10];
    // std::string s[5];

    // ::iter(i, 10, ::fill);
    // ::iter(i, 10, print_i);

    // std::cout << std::endl;

    // ::iter(s, 5, ::fill);
    // ::iter(s, 5, print_s);

    // std::cout << std::endl;

    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];

    iter(tab, 5, print);
    iter(tab2, 5, print);

    return 0;
 }