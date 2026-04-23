#include <iostream>

int main() {
    int value = 42;
    int* ptr = &value;

    std::cout << "value = " << value << '\n';
    std::cout << "&value = " << &value << '\n';
    std::cout << "ptr = " << ptr << '\n';
    std::cout << "*ptr = " << *ptr << '\n';

    *ptr = 100;
    std::cout << "after *ptr = 100, value = " << value << '\n';
    return 0;
}
