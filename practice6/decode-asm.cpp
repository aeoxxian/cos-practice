#include <iostream>

extern "C" void decode(long x, long y, long z, long* p);

int main() {
    long out = 0;
    decode(1, 2, 4, &out);
    std::cout << "decode result from assembly = " << out << '\n';
    return 0;
}
