#include <iomanip>
#include <iostream>

int main() {
    double x = 1.0 / 3.0;

    std::cout << "default: " << x << '\n';
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "fixed  : " << x << '\n';
    std::cout.unsetf(std::ios::floatfield);
    std::cout << std::scientific << "scientific: " << x << '\n';
    return 0;
}
