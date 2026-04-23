#include <bitset>
#include <iostream>

int main() {
    signed char sc = static_cast<signed char>(0xFF);
    unsigned char uc = static_cast<unsigned char>(0xFF);

    std::cout << "signed char value   = " << static_cast<int>(sc) << '\n';
    std::cout << "unsigned char value = " << static_cast<int>(uc) << '\n';

    std::cout << "signed char bits    = "
              << std::bitset<8>(static_cast<unsigned char>(sc)) << '\n';
    std::cout << "unsigned char bits  = " << std::bitset<8>(uc) << '\n';
    return 0;
}
