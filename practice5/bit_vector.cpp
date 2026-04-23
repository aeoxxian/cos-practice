#include <array>
#include <iostream>
#include <stdexcept>
#include <string>

// 슬라이드의 bit_vector 실습을 컴파일 가능한 형태로 정리한 버전
class bit_vector {
public:
    std::array<int, 4> bits{};

    bit_vector() = default;

    explicit bit_vector(const std::string& s) {
        if (s.size() != 4) {
            throw std::invalid_argument("bit_vector expects exactly 4 bits");
        }
        for (std::size_t i = 0; i < 4; ++i) {
            if (s[i] != '0' && s[i] != '1') {
                throw std::invalid_argument("input must contain only 0/1");
            }
            bits[i] = s[i] - '0';
        }
    }

    bit_vector operator&(const bit_vector& other) const {
        bit_vector out;
        for (int i = 0; i < 4; ++i) out.bits[i] = bits[i] & other.bits[i];
        return out;
    }

    bit_vector operator|(const bit_vector& other) const {
        bit_vector out;
        for (int i = 0; i < 4; ++i) out.bits[i] = bits[i] | other.bits[i];
        return out;
    }

    bit_vector operator^(const bit_vector& other) const {
        bit_vector out;
        for (int i = 0; i < 4; ++i) out.bits[i] = bits[i] ^ other.bits[i];
        return out;
    }

    void print() const {
        for (int b : bits) std::cout << b;
    }
};

int main() {
    std::string a, b;
    std::cout << "Enter 4-bit vector a: ";
    std::cin >> a;
    std::cout << "Enter 4-bit vector b: ";
    std::cin >> b;

    bit_vector va(a), vb(b);

    std::cout << "a     = "; va.print(); std::cout << '\n';
    std::cout << "b     = "; vb.print(); std::cout << '\n';
    std::cout << "a & b = "; (va & vb).print(); std::cout << '\n';
    std::cout << "a | b = "; (va | vb).print(); std::cout << '\n';
    std::cout << "a ^ b = "; (va ^ vb).print(); std::cout << '\n';
    return 0;
}
