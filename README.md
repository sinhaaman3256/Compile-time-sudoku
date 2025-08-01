# 🧠 Compile-Time Sudoku Solver in C++20

A fully functional Sudoku solver implemented entirely using **C++20 `constexpr` metaprogramming**, performing all computations **at compile time**. This project demonstrates the expressive power of modern C++ and how constraint satisfaction problems can be resolved without any runtime logic.

---

## ✨ Features

- ⚡ **Zero runtime overhead** — entire solution computed at compile time.
- 🧠 Pure `constexpr` logic with no mutable global state.
- 🧩 Validates and solves any valid 9x9 Sudoku puzzle at compile time.
- 🛠️ Output printed from `main()` — the program merely formats the result.
- 📦 Lightweight and self-contained single-header solution.
- 🔍 Includes `static_assert` to verify the solution's correctness.

---

## 📌 Example

Given this Sudoku board (0 represents an empty cell):

```cpp
constexpr sudoku::Board puzzle = {{
    {{5, 3, 0, 0, 7, 0, 0, 0, 0}},
    {{6, 0, 0, 1, 9, 5, 0, 0, 0}},
    {{0, 9, 8, 0, 0, 0, 0, 6, 0}},
    {{8, 0, 0, 0, 6, 0, 0, 0, 3}},
    {{4, 0, 0, 8, 0, 3, 0, 0, 1}},
    {{7, 0, 0, 0, 2, 0, 0, 0, 6}},
    {{0, 6, 0, 0, 0, 0, 2, 8, 0}},
    {{0, 0, 0, 4, 1, 9, 0, 0, 5}},
    {{0, 0, 0, 0, 8, 0, 0, 7, 9}}
}};
