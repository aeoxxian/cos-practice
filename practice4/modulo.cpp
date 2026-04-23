#include <iostream>

int main() {
    int a = 17;
    int b = 5;

    std::cout << "17 % 5  = " << (a % b) << '\n';
    std::cout << "-17 % 5 = " << (-a % b) << '\n';
    std::cout << "17 % -5 = " << (a % -b) << '\n';

    std::cout << "\nParity check using modulo:\n";
    for (int x = -3; x <= 3; ++x) {
        std::cout << x << " -> " << ((x % 2 == 0) ? "even" : "odd") << '\n';
    }
    return 0;
}
