#include <iostream>
#include "../include/solver.hpp"

constexpr sudoku::Board unsolved = {{
    {{1, 0, 0, 0, 0, 0, 0, 0, 2}},
    {{0, 0, 0, 0, 0, 0, 0, 3, 0}},
    {{0, 0, 0, 0, 0, 0, 4, 0, 0}},
    {{0, 0, 0, 0, 5, 0, 0, 0, 0}},
    {{0, 0, 0, 6, 0, 7, 0, 0, 0}},
    {{0, 0, 0, 0, 8, 0, 0, 0, 0}},
    {{0, 0, 9, 0, 0, 0, 0, 0, 0}},
    {{0, 1, 0, 0, 0, 0, 0, 0, 0}},
    {{2, 0, 0, 0, 0, 0, 0, 0, 0}}
}};

// Solve the Sudoku puzzle entirely at compile-time using constexpr.
constexpr auto solved = sudoku::solveBoard(unsolved);

int main() {
    std::cout << "Unsolved Sudoku:\n";
    sudoku::print(unsolved);

    std::cout << "\nSolved Sudoku (at compile-time):\n";
    sudoku::print(solved);
    return 0;
}
