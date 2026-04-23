#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    auto check = add;  // 함수 포인터

    if (check) {
        std::cout << "add(5, 9) = " << check(5, 9) << '\n';
    } else {
        std::cout << "NULL\n";
    }
    return 0;
}
