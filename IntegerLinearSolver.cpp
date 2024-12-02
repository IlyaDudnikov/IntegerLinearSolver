#include "IntegerLinearSolver.h"
#include <iostream>

IntegerLinearSolver::IntegerLinearSolver(int N, int M) : N(N), M(M) {
    if (N < 1 || N >= 15 || M < 1 || M >= 15)
    {
        throw std::invalid_argument("The values of N and M must range between 1 and 15, exclusive.");
    }
}
