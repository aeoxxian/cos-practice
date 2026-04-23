#include <iostream>
#include <typeinfo>

int main() {
    int i = 10;
    unsigned int ui = 10u;
    char c = 'A';
    float f = 3.14f;
    double d = 3.14;
    bool b = true;

    std::cout << "int           : " << i << ", size = " << sizeof(i) << '\n';
    std::cout << "unsigned int  : " << ui << ", size = " << sizeof(ui) << '\n';
    std::cout << "char          : " << c << ", size = " << sizeof(c) << '\n';
    std::cout << "float         : " << f << ", size = " << sizeof(f) << '\n';
    std::cout << "double        : " << d << ", size = " << sizeof(d) << '\n';
    std::cout << "bool          : " << b << ", size = " << sizeof(b) << '\n';
    return 0;
}
