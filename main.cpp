#include "IntegerLinearSolver.h"
#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;

    try {
        IntegerLinearSolver integerLinearSolver(N, M);

        integerLinearSolver.input();

        integerLinearSolver.solve();
        integerLinearSolver.printResult();
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}