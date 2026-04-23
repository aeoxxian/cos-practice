#include <cstdlib>
#include <iostream>

int main() {
    int* p = static_cast<int*>(std::malloc(sizeof(int)));
    if (!p) {
        std::cerr << "malloc failed\n";
        return 1;
    }

    *p = 123;
    std::cout << "*p = " << *p << '\n';
    std::free(p);
    return 0;
}
