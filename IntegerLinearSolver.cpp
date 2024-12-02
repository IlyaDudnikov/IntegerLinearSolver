#include "IntegerLinearSolver.h"
#include <iostream>

int IntegerLinearSolver::countNonzeroElements(int row) const
{
    int count = 0;
    for (int j = row; j <= M; j++)
    {
        if (matrix[row][j] != 0) count++;
    }
    return count;
}

int IntegerLinearSolver::findMinIndex(int row) const
{
    int minIndex = -1;
    for (int j = row; j < M; j++) {
        if (matrix[row][j] != 0) {
            if (minIndex == -1 || abs(matrix[row][j]) < abs(matrix[row][minIndex])) {
                minIndex = j;
            }
        }
    }
    return minIndex;
}

int IntegerLinearSolver::findNonzeroIndexExcluding(int row, int excludeIndex) const
{
    for (int j = row; j <= M; j++) {
        if (matrix[row][j] != 0 && j != excludeIndex) {
            return j;
        }
    }
    return -1;
}

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

void IntegerLinearSolver::solve()
{
    matrix.addUnitMatrix(N); // добавляем единичную матрицу

    for (size_t i = 0; i < N; i++) // цикл по уравнениям
    {
        while (true)
        {
            int countNonzero = countNonzeroElements(i);
            int minIndex = findMinIndex(i);

            if (countNonzero == 0)
            {
                break;
            }

            if (countNonzero == 1)
            {
                if (minIndex == -1) throw std::invalid_argument("NO SOLUTIONS");

                if (i != minIndex) matrix.swapColumns(i, minIndex);

                break;
            }

            if (countNonzero == 2 && matrix[i][M] != 0 && matrix[i][M] % matrix[i][minIndex] != 0)
            {
                throw std::invalid_argument("NO SOLUTIONS");
            }

            int j = findNonzeroIndexExcluding(i, minIndex);

            int q = matrix[i][j] / matrix[i][minIndex];
            int r = matrix[i][j] % matrix[i][minIndex];

            matrix.substractColumnWithCoefficient(j, minIndex, q);
        }
    }
}
