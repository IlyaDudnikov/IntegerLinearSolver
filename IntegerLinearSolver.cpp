#include "IntegerLinearSolver.h"
#include <iostream>

IntegerLinearSolver::IntegerLinearSolver(int N, int M) : N(N), M(M) {
    if (N < 1 || N >= 15 || M < 1 || M >= 15)
    {
        throw std::invalid_argument("The values of N and M must range between 1 and 15, exclusive.");
    }

    matrix.initSize(N + M, M + 1);
}

void IntegerLinearSolver::input()
{
    vector<int> vec(M + 1);
    for (size_t row = 0; row < N; row++)
    {
        for (size_t col = 0; col < M + 1; col++)
        {
            std::cin >> vec[col];
        }
        matrix.setRow(row, vec);
    }
}
