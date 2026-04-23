#include <iostream>

// x * 14 = x * (16 - 2) = (x << 4) - (x << 1)
long mul14_shift_add(long x) {
    return (x << 4) - (x << 1);
}

// x * 14 = x * (8 + 4 + 2) = (x << 3) + (x << 2) + (x << 1)
long mul14_sum_of_shifts(long x) {
    return (x << 3) + (x << 2) + (x << 1);
}

int main() {
    long x{};
    std::cout << "x: ";
    std::cin >> x;

    std::cout << "x * 14               = " << x * 14 << '\n';
    std::cout << "(x<<4) - (x<<1)      = " << mul14_shift_add(x) << '\n';
    std::cout << "(x<<3)+(x<<2)+(x<<1) = " << mul14_sum_of_shifts(x) << '\n';
    return 0;
}
