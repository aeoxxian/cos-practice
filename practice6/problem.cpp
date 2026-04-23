#include <iostream>

// 슬라이드의 'problem.cpp' 의도: 함수 이름을 조건식에 쓰면 함수 포인터로 해석된다는 점
int add(int a, int b) {
    int c = a + b;
    // 슬라이드 예제는 return 문이 생략된 형태로 보였지만,
    // 실행 가능한 코드로 만들기 위해 반환을 추가했습니다.
    return c;
}

int main() {
    int (*check)(int, int) = add;

    if (check == nullptr) {
        std::cout << "NULL" << std::endl;
    } else {
        std::cout << check(5, 9) << std::endl;
    }
    return 0;
}
