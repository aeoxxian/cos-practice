#include <iostream>

// 슬라이드의 분기 예제를 C로 옮긴 버전
short test(short x, short y, short z) {
    int val = z + y - x;

    if (z > 5) {
        if (y > 2) {
            val = x / z;
        }
        val = x / y;
    }

    if (z < 3) {
        val = z / y;
    }

    return static_cast<short>(val);
}

int main() {
    std::cout << "test(12, 3, 7) = " << test(12, 3, 7) << '\n';
    std::cout << "test(12, 3, 2) = " << test(12, 3, 2) << '\n';
    return 0;
}
