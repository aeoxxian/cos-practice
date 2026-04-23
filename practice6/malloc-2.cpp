#include <cstdlib>
#include <iostream>

int main() {
    int n = 5;
    int* arr = static_cast<int*>(std::malloc(sizeof(int) * n));
    if (!arr) {
        std::cerr << "malloc failed\n";
        return 1;
    }

    for (int i = 0; i < n; ++i) arr[i] = (i + 1) * 10;
    for (int i = 0; i < n; ++i) std::cout << "arr[" << i << "] = " << arr[i] << '\n';

    std::free(arr);
    return 0;
}
