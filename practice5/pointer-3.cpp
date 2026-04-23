#include <iostream>

void swap_by_pointer(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 3;
    int y = 7;

    std::cout << "before: x=" << x << ", y=" << y << '\n';
    swap_by_pointer(&x, &y);
    std::cout << "after : x=" << x << ", y=" << y << '\n';
    return 0;
}
