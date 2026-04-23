#include <cstdint>
#include <iostream>
#include <limits>

int main() {
    unsigned int ux = std::numeric_limits<unsigned int>::max();
    unsigned int uy = 1;
    unsigned int uz = ux + uy;

    std::cout << "unsigned max + 1 = " << uz << " (wraparound)\n";

    int sx = std::numeric_limits<int>::max();
    int sy = 1;
    long long safe_sum = static_cast<long long>(sx) + sy;

    std::cout << "int max      = " << sx << '\n';
    std::cout << "safe check   = " << safe_sum << '\n';
    std::cout << "컴퓨터 구조 관점: 고정 비트수에서는 carry / overflow를 따로 봐야 함\n";
    return 0;
}
