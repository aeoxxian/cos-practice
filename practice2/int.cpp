#include <iomanip>
#include <iostream>

int main() {
    int dec = 65;
    int hex = 0x41;
    char ch = 'A';

    std::cout << "dec = " << dec << '\n';
    std::cout << "hex = 0x" << std::hex << hex << std::dec << '\n';
    std::cout << "char = " << ch << '\n';

    std::cout << "\nASCII table demo\n";
    for (int i = 32; i < 48; ++i) {
        std::cout << i << " -> '" << static_cast<char>(i) << "'\n";
    }
    return 0;
}
