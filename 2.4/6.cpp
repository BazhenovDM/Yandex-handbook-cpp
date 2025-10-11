#include <iostream>
#include <vector>

struct Shift {
    int x = 0;
    int y = 0;
};

const std::vector<Shift> SHIFTS = {
    {-1, -1},
    {-1,  0},
    {-1,  1},
    { 0,  1},
    { 1,  1},
    { 1,  0},
    { 1, -1},
    { 0, -1},
};

int main() {
    size_t rows;
    size_t columns;
    size_t mines;
    std::cin >> rows >> columns >> mines;

    const int mineLabel = -1;

    std::vector<std::vector<int>> field(rows + 2, std::vector<int>(columns + 2));

    for (size_t index = 0; index != mines; ++index) {
        int row, column;
        std::cin >> row >> column;

        field[row][column] = mineLabel;

        for (auto shift : SHIFTS) {
            auto& cell = field[row + shift.x][column + shift.y];
            if (cell != mineLabel) {
                ++cell;
            }
        }
    }

    for (size_t row = 1; row <= rows; ++row) {
        for (size_t column = 1; column <= columns; ++column) {
            if (column > 1) {
                std::cout << " ";
            }
            if (field[row][column] == mineLabel) {
                std::cout << "*";
            } else {
                std::cout << field[row][column];
            }
        }
        std::cout << "\n";
    }
}
