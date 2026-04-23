#include <bitset>
#include <iostream>

int main() {
    unsigned int x = 0b10101100u;
    unsigned int y = 0b01010101u;

    std::cout << "x      = " << std::bitset<8>(x) << '\n';
    std::cout << "y      = " << std::bitset<8>(y) << '\n';
    std::cout << "x & y  = " << std::bitset<8>(x & y) << '\n';
    std::cout << "x | y  = " << std::bitset<8>(x | y) << '\n';
    std::cout << "x ^ y  = " << std::bitset<8>(x ^ y) << '\n';

    std::cout << "\nLogical operators return 0 or 1 only:\n";
    std::cout << "(x && y) = " << (x && y) << '\n';
    std::cout << "(x || y) = " << (x || y) << '\n';
    return 0;
}
