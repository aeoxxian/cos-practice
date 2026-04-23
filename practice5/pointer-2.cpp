#include <iostream>

int main() {
    int x = 10;
    int* p = &x;

    *p = 25;

    std::cout << "x = " << x << '\n';
    std::cout << "*p = " << *p << '\n';
    return 0;
}
