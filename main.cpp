#include "IntegerLinearSolver.h"
#include <iostream>

int main() {
    int N, M;
    std::cout << "Enter N and M: ";
    std::cin >> N >> M;
    IntegerLinearSolver integerLinearSolver(N, M);

    std::cout << "Enter " << N << " rows of " << M + 1 << " numbers each" << '\n';
    integerLinearSolver.input();
    std::cout << "Entry complete" << '\n';




    return 0;
}