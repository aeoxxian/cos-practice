#include <iostream>

int main() {
    int menu{};
    std::cout << "1:add 2:sub 3:mul 4:div > ";
    std::cin >> menu;

    int a = 20, b = 5;
    switch (menu) {
        case 1: std::cout << a + b << '\n'; break;
        case 2: std::cout << a - b << '\n'; break;
        case 3: std::cout << a * b << '\n'; break;
        case 4:
            if (b != 0) std::cout << a / b << '\n';
            else std::cout << "division by zero\n";
            break;
        default:
            std::cout << "invalid menu\n";
    }
    return 0;
}
