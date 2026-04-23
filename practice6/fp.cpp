#include <iostream>

int plus1(int x) { return x + 1; }
int square(int x) { return x * x; }

int apply(int (*fp)(int), int x) {
    return fp(x);
}

int main() {
    std::cout << "apply(plus1, 5) = " << apply(plus1, 5) << '\n';
    std::cout << "apply(square, 5) = " << apply(square, 5) << '\n';
    return 0;
}
