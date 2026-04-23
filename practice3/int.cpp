#include <bitset>
#include <iomanip>
#include <iostream>

int main() {
    unsigned int x = 0x1234ABCDu;

    std::cout << "x (decimal) = " << x << '\n';
    std::cout << "x (hex)     = 0x" << std::hex << x << std::dec << '\n';
    std::cout << "low byte    = 0x" << std::hex << (x & 0xFFu) << std::dec << '\n';
    std::cout << "bits        = " << std::bitset<32>(x) << '\n';
    return 0;
}
