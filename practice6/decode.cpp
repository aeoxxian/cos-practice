#include <iostream>

// 슬라이드의 decode 예제를 C로 옮긴 버전
void decode(long x, long y, long z, long* p) {
    long t = y;
    y = z;
    z = x;
    x = t;
    *p = x + y + z;
}

int main() {
    long out = 0;
    decode(1, 2, 4, &out);
    std::cout << "decode result = " << out << '\n';
    return 0;
}
