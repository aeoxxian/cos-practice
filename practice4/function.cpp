#include <iostream>

int abs_value(int x) {
    return (x < 0) ? -x : x;
}

bool is_even(int x) {
    return (x % 2) == 0;
}

int main() {
    int x{};
    std::cout << "x: ";
    std::cin >> x;

    std::cout << "abs(x)   = " << abs_value(x) << '\n';
    std::cout << "is_even? = " << (is_even(x) ? "true" : "false") << '\n';
    return 0;
}
