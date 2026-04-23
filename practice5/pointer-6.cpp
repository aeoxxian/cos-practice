#include <iostream>

int main() {
    char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char* p = str;

    std::cout << "string contents: " << p << '\n';
    std::cout << "address of str : " << static_cast<void*>(str) << '\n';
    std::cout << "address of p   : " << static_cast<void*>(&p) << '\n';
    std::cout << "value stored in p (== str) : " << static_cast<void*>(p) << '\n';
    return 0;
}
