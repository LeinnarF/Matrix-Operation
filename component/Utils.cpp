#include "../header/Utils.h"
using namespace std;

void printMatrix(vector<vector<double>> &v)
{
    for (auto row : v)
    {
        for (double entries : row)
        {
            cout << setw(4) << entries << " ";
        }
        cout << endl;
    }
}
// n x n matrix
void inputMatrix(vector<vector<double>> &v, int size)
{
    v.resize(size, vector<double>(size));
    for (int i = 0; i < size; i++)
    {
        cout << "[" << i + 1 << "] : ";
        for (int j = 0; j < size; j++)
        {
            cin >> v[i][j];
        }
    }
}
// m x n matrix
void inputMatrix(vector<vector<double>> &v, int row, int col)
{
    v.resize(row, vector<double>(col));
    for (int i = 0; i < row; i++)
    {
        cout << "[" << i + 1 << "] : ";
        for (int j = 0; j < col; j++)
        {
            cin >> v[i][j];
        }
    }
}
