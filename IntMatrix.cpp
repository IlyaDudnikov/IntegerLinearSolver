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

//IntMatrix::IntMatrix(int rows, int cols)
//{
//    data.resize(rows, vector<int>(cols));
//}

//void IntMatrix::add(vector<int> vec)
//{
//    data.push_back(vec);
//}
