#include <iomanip>
#include <iostream>

int main() {
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::cout << "decimal : " << x << '\n';
    std::cout << "hex     : 0x" << std::hex << x << std::dec << '\n';

    if (0 <= x && x <= 127) {
        std::cout << "ASCII   : '" << static_cast<char>(x) << "'\n";
    } else {
        std::cout << "ASCII   : out of printable basic range\n";
    }
    return 0;
}
