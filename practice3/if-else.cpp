#include <iostream>

int main() {
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;

    if (x > 0) {
        std::cout << "positive\n";
    } else if (x < 0) {
        std::cout << "negative\n";
    } else {
        std::cout << "zero\n";
    }
    return 0;
}
