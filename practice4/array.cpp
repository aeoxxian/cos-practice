#include <iostream>

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9};
    int sum = 0;
    int mn = arr[0];
    int mx = arr[0];

    for (int x : arr) {
        sum += x;
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }

    std::cout << "sum = " << sum << '\n';
    std::cout << "min = " << mn << '\n';
    std::cout << "max = " << mx << '\n';
    return 0;
}
