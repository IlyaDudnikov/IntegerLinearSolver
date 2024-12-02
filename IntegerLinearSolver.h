#pragma once

#include "IntMatrix.h"

class IntegerLinearSolver
{
private:
    int N, M;
    IntMatrix matrix;

public:
    IntegerLinearSolver(int N, int M);
    void input();
};