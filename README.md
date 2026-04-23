# Computer Architecture Practice Code Pack

이 저장소는 업로드된 **Practice 1 ~ Practice 7 슬라이드**에 나온 코드 연습들을
직접 실행할 수 있도록 정리한 예제 모음입니다.

구성 원칙:
- 슬라이드에서 **파일 이름과 주제가 명확히 보이는 예제**는 그대로 구현
- 슬라이드의 코드가 일부 잘려 있거나 애니메이션 때문에 전체가 보이지 않는 경우,
  **주제와 설명을 기준으로 컴파일 가능한 형태로 복원**
- 학습용이므로 각 파일에 간단한 주석을 추가

## 폴더 구성

- `practice1/` Programming Environment
- `practice2/` Text Representation
- `practice3/` Integer Representation
- `practice4/` Integer Operator I
- `practice5/` Integer Operator II / Pointer / Bit Vector
- `practice6/` Assembly
- `practice7/` CPU / Class example

## 빌드

리눅스(x86-64) 기준:

```bash
chmod +x build_all.sh
./build_all.sh
```

빌드 결과는 `build/` 폴더에 생성됩니다.

개별 실행 예시:

```bash
g++ -std=c++17 practice2/argument.cpp -o argument
./argument hello world

g++ -std=c++17 practice5/bit_vector.cpp -o bit_vector
./bit_vector

g++ -std=c++17 practice6/main.cpp practice6/sum-asm.S -o sum_asm
./sum_asm
```

## 참고

몇몇 슬라이드의 코드는 화면상 일부가 가려져 있었기 때문에,
그 부분은 **슬라이드 주제에 맞게 자연스럽고 컴파일 가능하게 복원**했습니다.
그래도 전체 흐름과 핵심 개념은 슬라이드 내용에 맞춰 두었습니다.
