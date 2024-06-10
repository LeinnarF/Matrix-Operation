#include "../header/MatrixOperations.h"

using namespace std;

vector<vector<double>> multiplyMatrix(vector<vector<double>> &a, vector<vector<double>> &b)
{
    vector<vector<double>> product(a.size(), vector<double>(b[0].size()));
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
vector<vector<double>> addMatrix(vector<vector<double>> &a, vector<vector<double>> &b)
{
    vector<vector<double>> sum(a.size(), vector<double>(a[0].size()));
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    return sum;
}
vector<vector<double>> transpose(vector<vector<double>> &v)
{
    vector<vector<double>> trans(v[0].size(), vector<double>(v.size()));
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            trans[j][i] = v[i][j];
        }
    }
    return trans;
}