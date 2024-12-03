#include "IntegerLinearSolver.h"
#include <iostream>

int main() {
    int N, M;
    std::cout << "Enter N and M: ";
    std::cin >> N >> M;

    try {
        IntegerLinearSolver integerLinearSolver(N, M);

        std::cout << "Enter " << N << " rows of " << M + 1 << " numbers each" << '\n';
        integerLinearSolver.input();

        integerLinearSolver.solve();
        integerLinearSolver.printResult();
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << '\n';
    }

    system("pause");
    
    return 0;
}