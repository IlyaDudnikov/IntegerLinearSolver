#pragma once

#include "IntMatrix.h"

class IntegerLinearSolver
{
private:
    int K;
    int N, M;
    IntMatrix matrix;
    
    int countNonzeroElements(int row) const;
    int findMinIndex(int row) const;
    int findNonzeroIndexExcluding(int row, int excludeIndex) const;
    int countFreeVariables() const;

public:
    IntegerLinearSolver(int N, int M);
    void input();
    void solve();
    void printResult();
};