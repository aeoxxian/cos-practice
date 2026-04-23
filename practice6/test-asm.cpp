#include <iostream>

extern "C" short test(short x, short y, short z);

int main() {
    std::cout << "test from assembly (12, 3, 7) = " << test(12, 3, 7) << '\n';
    std::cout << "test from assembly (12, 3, 2) = " << test(12, 3, 2) << '\n';
    return 0;
}
