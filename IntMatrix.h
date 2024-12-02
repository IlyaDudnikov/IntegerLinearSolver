#pragma once

#include <vector>

using std::vector;

class IntMatrix
{
private:
    int rows, cols;
    vector<vector<int>> data;

public:
    IntMatrix();
    void initSize(int rows, int cols);
    void setRow(int row, vector<int> vec);
    //IntMatrix(int rows, int cols);
    //void add(vector<int> vec);
};