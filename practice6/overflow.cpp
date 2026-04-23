#include <iostream>
#include <limits>

int main() {
    unsigned int ux = std::numeric_limits<unsigned int>::max();
    std::cout << "unsigned max      = " << ux << '\n';
    std::cout << "unsigned max + 1  = " << (ux + 1) << '\n';

    short sx = std::numeric_limits<short>::max();
    short sy = 1;
    int mathematical_sum = static_cast<int>(sx) + sy;

    std::cout << "short max         = " << sx << '\n';
    std::cout << "mathematical sum  = " << mathematical_sum << '\n';
    std::cout << "fixed-width integer arithmetic may overflow\n";
    return 0;
}
