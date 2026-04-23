#include <bitset>
#include <iostream>

unsigned int one_hot_encode(unsigned int x) {
    if (x < 4) return 1u << x;
    return 0u;
}

int main() {
    for (unsigned int x = 0; x < 4; ++x) {
        std::cout << x << " -> " << std::bitset<4>(one_hot_encode(x)) << '\n';
    }
    return 0;
}
