#include <iostream>

int main() {
    int n{};
    std::cout << "How many numbers? ";
    std::cin >> n;

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int x{};
        std::cin >> x;
        sum += x;
    }

    std::cout << "average = " << (n ? static_cast<double>(sum) / n : 0.0) << '\n';
    return 0;
}
