#include <iostream>

int main() {
    const char* msg = "hello";
    const char* p = msg;

    while (*p != '\0') {
        std::cout << *p << ' ';
        ++p;
    }
    std::cout << '\n';
    return 0;
}
