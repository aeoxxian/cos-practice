#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p{3, 4};
    std::cout << "Point(" << p.x << ", " << p.y << ")\n";
    return 0;
}
