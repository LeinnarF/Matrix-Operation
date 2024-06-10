#include "../header/Determinant.h"

using namespace std;

vector<vector<double>> subMatrix(vector<vector<double>> &v, int index, int size)
{
    vector<vector<double>> newMatrix(size - 1, vector<double>(size - 1));
    int row = 0;
    for (int i = 1; i < size; i++)
    {
        int col = 0;
        for (int j = 0; j < size; j++)
        {
            if (j != index)
            {
                newMatrix[row][col] = v[i][j];
                col++;
            }
        }
        row++;
    }
    return newMatrix;
}
double solveDeterminant(vector<vector<double>> &v, int size)
{
    if (size == 1)
        return v[0][0];

    double det = 0;
    for (int i = 0; i < size; i++)
    {
        vector<vector<double>> sub = subMatrix(v, i, size);
        int sign = (i % 2 == 0) ? 1 : -1;
        det += sign * v[0][i] * solveDeterminant(sub, size - 1);
    }
    return det;
}