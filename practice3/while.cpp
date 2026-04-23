#include <iostream>

int main() {
    int n{};
    std::cout << "n: ";
    std::cin >> n;

    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        ++i;
    }

    std::cout << "sum(1.." << n << ") = " << sum << '\n';
    return 0;
}
