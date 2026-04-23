#include <iomanip>
#include <iostream>

// 정수/문자 변환 데모
int main() {
    char c = 'A';
    int x = c;
    unsigned char uc = 0xFF;
    int y = uc;

    std::cout << "char 'A' -> int = " << x << '\n';
    std::cout << "unsigned char 0xFF -> int = " << y << '\n';

    int z = 300;
    unsigned char narrowed = static_cast<unsigned char>(z);
    std::cout << "300 narrowed to unsigned char = 0x"
              << std::hex << static_cast<int>(narrowed) << std::dec << '\n';
    return 0;
}
