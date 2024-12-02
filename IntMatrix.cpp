#include "Matrix.h"

Matrix::Matrix()
{
}

Matrix::Matrix(int rows, int cols)
{
    data.resize(rows, vector<int>(cols));
}
