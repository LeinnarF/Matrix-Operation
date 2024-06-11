#include "../header/MatrixInverse.h"
#include "../header/MatrixOperations.h"

using namespace std;

vector<vector<double>> cofactorSubMatrix(vector<vector<double>> &v, int exRow, int exCol, int size)
{
    vector<vector<double>> newMatrix(size - 1, vector<double>(size - 1));
    int row = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == exRow)
            continue;
        int col = 0;
        for (int j = 0; j < size; j++)
        {
            if (j == exCol)
                continue;
            newMatrix[row][col] = v[i][j];
            col++;
        }
        row++;
    }
    return newMatrix;
}
double solveCofactor(vector<vector<double>> &v, int size)
{
    if (size == 1)
        return v[0][0];

    double cofac = 0;
    for (int i = 0; i < size; i++)
    {
        auto sub = cofactorSubMatrix(v, i, 0, size);
        int sign = (i % 2 == 0) ? 1 : -1;
        cofac += sign * v[i][0] * solveCofactor(sub, size - 1);
    }
    return cofac;
}
vector<vector<double>> cofactorMatrix(vector<vector<double>> &v, int size)
{
    vector<vector<double>> cofac(size, vector<double>(size));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            auto sub = cofactorSubMatrix(v, i, j, size);
            int sign = ((i + j) % 2 == 0) ? 1 : -1;
            cofac[i][j] = sign * solveCofactor(sub, sub.size());
        }
    }
    return cofac;
}

vector<vector<double>> adjointMatrix(vector<vector<double>> &v)
{
    auto cofactor = cofactorMatrix(v, v.size());
    auto adjoint = transpose(cofactor);
    return adjoint;
}

vector<vector<double>> inverseMatrix(vector<vector<double>> &v)
{
    vector<vector<double>> inverse(v.size(), vector<double>(v.size()));
    auto adjoint = adjointMatrix(v);
    double det = solveDeterminant(v, v.size());

    if (det == 0)
    {
        cout << "No inverse" << endl;
        return vector<vector<double>>();
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            inverse[i][j] = round(adjoint[i][j] / det * 100) / 100;
        }
    }
    return inverse;
}
