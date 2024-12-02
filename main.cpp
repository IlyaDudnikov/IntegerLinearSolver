#include "IntegerLinearSolver.h"
#include <iostream>

int main() {
    int N, M;
    std::cout << "Enter N and M: ";
    std::cin >> N >> M;
    IntegerLinearSolver integerLinearSolver(N, M);
    integerLinearSolver.input();

    return 0;
}