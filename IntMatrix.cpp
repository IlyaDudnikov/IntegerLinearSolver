#include "IntMatrix.h"

IntMatrix::IntMatrix() {}

IntMatrix::IntMatrix(int rows, int cols)
{
    data.resize(rows, vector<int>(cols));
}
