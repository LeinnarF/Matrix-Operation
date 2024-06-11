#include <windows.h>
#include "header/Determinant.h"
#include "header/Utils.h"
#include "header/MatrixOperations.h"
#include "header/MatrixInverse.h"

using namespace std;
using Matrix = vector<vector<double>>; // I'm a bit lazy

void checkMatrixSizeAndInput(Matrix &matrix, int row, int col)
{
    if (row == col)
    {
        inputMatrix(matrix, row);
    }
    else
    {
        inputMatrix(matrix, row, col);
    }
}
void getMatrixDimensions(int &row, int &col)
{
    cout << "Matrix Size\n\n";
    cout << "Rows  : ";
    cin >> row;
    cout << "Column: ";
    cin >> col;
}
void handleDeterminant(Matrix &v)
{
    system("cls");
    int size;
    cout << "Determinant\n\n";
    cout << "Size of matrix: ";
    cin >> size;
    cout << endl;
    inputMatrix(v, size);
    cout << endl;
    printMatrix(v);

    cout << "\nDeterminant: " << solveDeterminant(v, v.size());
    cout << endl;
    system("pause");
}
void handleTranspose(Matrix &v)
{
    system("cls");
    int row, col;
    cout << "Transpose\n\n";
    getMatrixDimensions(row, col);
    checkMatrixSizeAndInput(v, row, col);
    printMatrix(v);
    cout << endl;
    cout << "\nResult:\n"
         << endl;
    auto r = transpose(v);
    printMatrix(r);
    cout << endl;
    system("pause");
}
void handleMatrixAddition(Matrix &a, Matrix &b)
{
    system("cls");
    cout << "Matrix Addition\n\n";
    int row, col;
    cout << "Matrix 1: " << endl;
    getMatrixDimensions(row, col);
    checkMatrixSizeAndInput(a, row, col);
    cout << "\nMatrix 2: " << endl;
    checkMatrixSizeAndInput(b, row, col);
    auto r = addMatrix(a, b);
    cout << "\nResult:\n"
         << endl;
    printMatrix(r);
    cout << endl;
    system("pause");
}
void handleMatrixMultiplication(Matrix &a, Matrix &b)
{
    system("cls");
    cout << "Matrix Multiplication\n\n";
    int row1, col1, row2, col2;
    cout << "Matrix 1: " << endl;
    getMatrixDimensions(row1, col1);
    checkMatrixSizeAndInput(a, row1, col1);
    cout << "\nMatrix 2: " << endl;
    getMatrixDimensions(row2, col2);
    checkMatrixSizeAndInput(b, row2, col2);
    auto r = multiplyMatrix(a, b);
    cout << "\nResult:\n"
         << endl;
    printMatrix(r);
    cout << endl;
    system("pause");
}
void handleInverse(Matrix &v)
{
    system("cls");
    cout << "Inverse of Matrix\n\n";
    int size;
    cout << "Size of matrix: ";
    cin >> size;
    cout << endl;
    inputMatrix(v, size);
    cout << endl;
    printMatrix(v);
    cout << "\n\nInverse:\n"
         << endl;
    auto inverse = inverseMatrix(v);
    printMatrix(inverse);
    cout << endl;
    system("pause");
}
void handleCofactor(Matrix &v)
{
    system("cls");
    cout << "Cofactor of Matrix\n\n";
    int size;
    cout << "Size of matrix: ";
    cin >> size;
    cout << endl;
    inputMatrix(v, size);
    cout << endl;
    printMatrix(v);
    cout << "\n\nCofactor:\n"
         << endl;
    auto cofactor = cofactorMatrix(v, v.size());
    printMatrix(cofactor);
    cout << endl;
    system("pause");
}
void handleAdjoint(Matrix &v)
{
    system("cls");
    cout << "Adjoint of Matrix\n\n";
    int size;
    cout << "Size of matrix: ";
    cin >> size;
    cout << endl;
    inputMatrix(v, size);
    cout << endl;
    printMatrix(v);
    cout << "\n\nAdjoint: " << endl;
    auto adjoint = adjointMatrix(v);
    printMatrix(adjoint);
    cout << endl;
    system("pause");
}

int main()
{
    vector<vector<double>> matrix1;
    vector<vector<double>> matrix2;

    int choice;
    while (choice < 8)
    {
        system("cls");
        cout << "Matrix Operations\n\n";
        cout << "1. Determinant\n2. Transpose\n3. Matrix Addition\n4. Matrix Multiplication\n5. Inverse\n6. Cofactors\n7. Adjoint\n8. Exit" << endl;
        cout << "\nEnter choice: ";
        cin >> choice;

        matrix1.clear();
        matrix2.clear();

        switch (choice)
        {
        case 1:
            handleDeterminant(matrix1);
            break;
        case 2:
            handleTranspose(matrix1);
            break;
        case 3:
            handleMatrixAddition(matrix1, matrix2);
            break;
        case 4:
            handleMatrixMultiplication(matrix1, matrix2);
            break;
        case 5:
            handleInverse(matrix1);
            break;
        case 6:
            handleCofactor(matrix1);
            break;
        case 7:
            handleAdjoint(matrix1);
            break;
        default:
            cout << "Terminated" << endl;
            break;
        }
    }
    return 0;
}
