#include "../header/MatrixOperations.h"

using namespace std;
using Matrix = vector<vector<double>>;

Matrix multiplyMatrix(Matrix &a, Matrix &b)
{
    Matrix product(a.size(), vector<double>(b[0].size()));
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b[0].size(); j++)
        {
            for (int k = 0; k < a[0].size(); k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return product;
}
Matrix addMatrix(Matrix &a, Matrix &b)
{
    Matrix sum(a.size(), vector<double>(a[0].size()));
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    return sum;
}
Matrix transpose(Matrix &v)
{
    Matrix trans(v[0].size(), vector<double>(v.size()));
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            trans[j][i] = v[i][j];
        }
    }
    return trans;
}

Matrix scalarMultiply(Matrix &v, double scalar)
{
    Matrix result(v.size(), vector<double>(v[0].size()));
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            result[i][j] = v[i][j] * scalar;
        }
    }
    return result;
}