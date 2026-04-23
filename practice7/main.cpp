#include "human.h"
#include <iostream>

int main() {
    Human h1;
    Human h2("Alice", 20, 165.2, 52.5);

    std::cout << "[Default human]\n";
    h1.printInfo();

    std::cout << "\n[Custom human]\n";
    h2.printInfo();

    std::cout << "\nModify h1...\n";
    h1.setName("Bob");
    h1.setAge(22);
    h1.setHeight(178.0);
    h1.setWeight(70.0);
    h1.printInfo();

    return 0;
}
