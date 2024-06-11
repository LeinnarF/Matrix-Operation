#include "../header/Utils.h"
using namespace std;

void setColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void printMatrix(vector<vector<double>> &v)
{
    setColor(14);
    for (auto row : v)
    {
        cout << "| ";
        for (double entries : row)
        {
            cout << setw(7) << entries << " ";
        }
        cout << "     |" << endl;
    }
    setColor(7);
}
// n x n matrix
void inputMatrix(vector<vector<double>> &v, int size)
{
    v.resize(size, vector<double>(size));
    cout << "Enter the elements of the " << size << "x" << size << " matrix:\n";
    for (int i = 0; i < size; i++)
    {
        setColor(6);
        cout << "\nRow " << i + 1 << ":\n";
        for (int j = 0; j < size; j++)
        {
            setColor(7);
            cout << "Column " << j + 1 << ": ";
            cin >> v[i][j];
        }
    }
    cout << "\n";
}

// m x n matrix
void inputMatrix(vector<vector<double>> &v, int row, int col)
{
    v.resize(row, vector<double>(col));
    cout << "Enter the elements of the " << row << "x" << col << " matrix:\n";
    for (int i = 0; i < row; i++)
    {
        setColor(6);
        cout << "\nRow " << i + 1 << ":\n";
        for (int j = 0; j < col; j++)
        {
            setColor(7);
            cout << "Column " << j + 1 << ": ";
            cin >> v[i][j];
        }
    }
    cout << "\n";
}