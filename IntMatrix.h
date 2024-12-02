#pragma once

#include <vector>

using std::vector;

class IntMatrix
{
private:
    vector<vector<int>> data;

public:
    IntMatrix();
    IntMatrix(int rows, int cols);
};