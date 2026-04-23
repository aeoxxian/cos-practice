#include <iostream>

extern "C" long sum(long x, long y);

int main() {
    long a = 10;
    long b = 20;
    std::cout << "sum from assembly = " << sum(a, b) << '\n';
    return 0;
}
