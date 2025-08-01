cmake_minimum_required(VERSION 3.20)
project(SudokuSolver LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable
add_executable(sudoku_solver main.cpp)

# Include path
target_include_directories(sudoku_solver PRIVATE include)
