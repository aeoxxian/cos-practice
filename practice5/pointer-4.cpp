#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr;

    for (int i = 0; i < 5; ++i) {
        std::cout << "arr[" << i << "] = " << *(p + i)
                  << ", address = " << (p + i) << '\n';
    }
    return 0;
}
