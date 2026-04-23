#include <iostream>

long sum(long x, long y) {
    return x + y;
}

int main() {
    long a = 10;
    long b = 20;
    std::cout << "sum(" << a << ", " << b << ") = " << sum(a, b) << '\n';
    return 0;
}
