#include <iostream>

typedef unsigned long ulong_t;
using word_t = unsigned short;

int main() {
    ulong_t a = 100;
    word_t b = 20;

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    return 0;
}
