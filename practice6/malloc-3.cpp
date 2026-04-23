#include <cstdlib>
#include <iostream>

int main() {
    int rows = 2;
    int cols = 3;

    int** mat = static_cast<int**>(std::malloc(sizeof(int*) * rows));
    if (!mat) return 1;

    for (int i = 0; i < rows; ++i) {
        mat[i] = static_cast<int*>(std::malloc(sizeof(int) * cols));
        if (!mat[i]) return 1;
    }

    int value = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            mat[i][j] = value++;
            std::cout << mat[i][j] << ' ';
        }
        std::cout << '\n';
    }

    for (int i = 0; i < rows; ++i) std::free(mat[i]);
    std::free(mat);
    return 0;
}
