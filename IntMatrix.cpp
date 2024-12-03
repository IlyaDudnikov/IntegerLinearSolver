#include "IntMatrix.h"
#include <iostream>

IntMatrix::IntMatrix() {}

void IntMatrix::initSize(int rows, int cols)
{
    data.resize(rows, vector<int>(cols));
    this->rows = rows;
    this->cols = cols;
}

void IntMatrix::setRow(int row, vector<int> vec)
{
    if (vec.size() != cols)
    {
        throw std::invalid_argument("The size of the vector must match the number of columns in the matrix.");
    }

    data[row] = vec;
}

void IntMatrix::addUnitMatrix(int startRow)
{
    for (size_t i = startRow, j = 0; i < rows; i++, j++)
    {
        data[i][j] = 1;
    }
}

void IntMatrix::swapColumns(int col1, int col2)
{
    for (size_t i = 0; i < rows; i++)
    {
        std::swap(data[i][col1], data[i][col2]);
    }
}

void IntMatrix::substractColumnWithCoefficient(int targetCol, int sourceCol, int coef)
{
    for (int row = 0; row < rows; row++) {
        data[row][targetCol] -= data[row][sourceCol] * coef;
    }
}

const std::vector<int>& IntMatrix::operator[](int index) const
{
    return data[index];
}
