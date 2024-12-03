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
    void addUnitMatrix(int startRow);
    void swapColumns(int col1, int col2);
    void substractColumnWithCoefficient(int targetCol, int sourceCol, int coef);

    const std::vector<int>& operator[](int index) const;
};