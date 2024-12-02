#pragma once

#include "IntMatrix.h"

class IntegerLinearSolver
{
private:
    int N, M;
    IntMatrix matrix;
    
    int countNonzeroElements(int row) const;
    int findMinIndex(int row) const;
    int findNonzeroIndexExcluding(int row, int excludeIndex) const;

public:
    IntegerLinearSolver(int N, int M);
    void input();
    void solve();
};