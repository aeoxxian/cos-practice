#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")" && pwd)"
BUILD="$ROOT/build"
mkdir -p "$BUILD"

compile_cpp_dir() {
  local dir="$1"
  local tag="$2"
  for src in "$ROOT/$dir"/*.cpp; do
    [ -e "$src" ] || continue
    local base
    base="$(basename "$src" .cpp)"
    if [[ "$dir" == "practice6" && ( "$base" == "main" || "$base" == "decode-asm" || "$base" == "test-asm" ) ]]; then
      continue
    fi
    if [[ "$dir" == "practice7" && ( "$base" == "main" || "$base" == "human" ) ]]; then
      continue
    fi
    g++ -std=c++17 "$src" -o "$BUILD/${tag}_${base}"
  done
}

compile_cpp_dir "practice1" "p1"
compile_cpp_dir "practice2" "p2"
compile_cpp_dir "practice3" "p3"
compile_cpp_dir "practice4" "p4"
compile_cpp_dir "practice5" "p5"

# practice6 standalone cpp files
for src in "$ROOT/practice6"/{sum.cpp,decode.cpp,test.cpp,convert.cpp,problem.cpp,problem_fixed.cpp,overflow.cpp,malloc-1.cpp,malloc-2.cpp,malloc-3.cpp,struct.cpp,typedef.cpp,fp.cpp}; do
  [ -e "$src" ] || continue
  base="$(basename "$src" .cpp)"
  g++ -std=c++17 "$src" -o "$BUILD/p6_${base}"
done

# practice6 assembly pairs
g++ -std=c++17 "$ROOT/practice6/skeleton.cpp" "$ROOT/practice6/run.S" -o "$BUILD/p6_skeleton"
g++ -std=c++17 "$ROOT/practice6/main.cpp" "$ROOT/practice6/sum-asm.S" -o "$BUILD/p6_sum_asm"
g++ -std=c++17 "$ROOT/practice6/decode-asm.cpp" "$ROOT/practice6/decode.S" -o "$BUILD/p6_decode_asm"
g++ -std=c++17 "$ROOT/practice6/test-asm.cpp" "$ROOT/practice6/test.S" -o "$BUILD/p6_test_asm"

# practice7
g++ -std=c++17 "$ROOT/practice7/main.cpp" "$ROOT/practice7/human.cpp" -o "$BUILD/p7_human_main"
g++ -std=c++17 "$ROOT/practice7/one_hot_demo.cpp" -o "$BUILD/p7_one_hot_demo"

echo "Build complete: $BUILD"
ls -1 "$BUILD"
