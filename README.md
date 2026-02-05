
# Backtracking Examples in C++

This repository contains **clean, teaching-oriented C++ examples**
of classic backtracking problems.

Each example follows the same pattern:

- choose
- recurse
- undo (backtrack)

These are intended for lecture, live coding, and student study
*before* introducing dynamic programming.

## Examples

1. Permutations
2. Subsets
3. N-Queens

## Build

Each program is standalone:

```bash
g++ -std=c++17 permutations.cpp -o permutations
./permutations
```

No external libraries required.
