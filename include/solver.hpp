#pragma once
#include <array>
#include <cassert>

namespace sudoku {

using Board = std::array<std::array<int, 9>, 9>;

constexpr bool isValid(const Board& board, int row, int col, int num) {
    for (int x = 0; x < 9; ++x) {
        if (board[row][x] == num || board[x][col] == num)
            return false;
        if (board[(row / 3) * 3 + x / 3][(col / 3) * 3 + x % 3] == num)
            return false;
    }
    return true;
}

constexpr bool solve(Board& board) {
    for (int row = 0; row < 9; ++row) {
        for (int col = 0; col < 9; ++col) {
            if (board[row][col] == 0) {
                for (int num = 1; num <= 9; ++num) {
                    if (isValid(board, row, col, num)) {
                        board[row][col] = num;
                        if (solve(board)) return true;
                        board[row][col] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

// Wrapper that solves the board at compile-time
constexpr Board solveBoard(Board board) {
    bool success = solve(board);
    assert(success && "Failed to solve the Sudoku puzzle at compile time");
    return board;
}

constexpr void print(Board board){
    for(int i = 0; i < 9; ++i){
        for(int j = 0; j < 9; ++j){
            std::cout << board[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

} // namespace sudoku
