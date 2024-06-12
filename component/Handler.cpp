#include "../header/Handler.h"

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
    setColor(10);
    cout << "Determinant\n\n";
    setColor(7);
    cout << "Size of matrix: ";
    cin >> size;
    cout << endl;
    inputMatrix(v, size);
    cout << endl;
    printMatrix(v);
    setColor(10);
    cout << "\nDeterminant: " << solveDeterminant(v, v.size()) << endl;
    cout << endl;
    setColor(7);
    system("pause");
}
void handleTranspose(Matrix &v)
{
    system("cls");
    int row, col;
    setColor(10);
    cout << "Transpose\n\n";
    setColor(7);
    getMatrixDimensions(row, col);
    checkMatrixSizeAndInput(v, row, col);
    cout << endl;
    printMatrix(v);
    cout << endl;
    setColor(10);
    cout << "\nResult:\n"
         << endl;
    setColor(7);
    auto r = transpose(v);
    printMatrix(r);
    cout << endl;
    system("pause");
}
void handleMatrixAddition(Matrix &a, Matrix &b)
{
    system("cls");
    setColor(10);
    cout << "Matrix Addition\n\n";
    setColor(7);
    int row, col;
    setColor(6);
    cout << "Matrix 1: " << endl;
    setColor(7);
    getMatrixDimensions(row, col);
    checkMatrixSizeAndInput(a, row, col);
    printMatrix(a);
    setColor(6);
    cout << "\nMatrix 2: " << endl;
    setColor(7);
    checkMatrixSizeAndInput(b, row, col);
    printMatrix(b);
    auto r = addMatrix(a, b);
    setColor(10);
    cout << "\nResult:\n"
         << endl;
    setColor(7);
    printMatrix(r);
    cout << endl;
    system("pause");
}
void handleMatrixMultiplication(Matrix &a, Matrix &b)
{
    system("cls");
    setColor(10);
    cout << "Matrix Multiplication\n\n";
    setColor(7);
    int row1, col1, row2, col2;
    setColor(6);
    cout << "Matrix 1: " << endl;
    setColor(7);
    getMatrixDimensions(row1, col1);
    checkMatrixSizeAndInput(a, row1, col1);
    printMatrix(a);
    setColor(6);
    cout << "\nMatrix 2: " << endl;
    setColor(7);
    getMatrixDimensions(row2, col2);
    checkMatrixSizeAndInput(b, row2, col2);
    printMatrix(b);
    auto r = multiplyMatrix(a, b);
    setColor(10);
    cout << "\nResult:\n"
         << endl;
    setColor(7);
    printMatrix(r);
    cout << endl;
    system("pause");
}
void handleInverse(Matrix &v)
{
    system("cls");
    setColor(10);
    cout << "Inverse of Matrix\n\n";
    setColor(7);
    int size;
    cout << "Size of matrix: ";
    cin >> size;
    cout << endl;
    inputMatrix(v, size);
    cout << endl;
    printMatrix(v);
    setColor(10);
    cout << "\n\nInverse:\n"
         << endl;
    setColor(7);
    auto inverse = inverseMatrix(v);
    printMatrix(inverse);
    cout << endl;
    system("pause");
}
void handleCofactor(Matrix &v)
{
    system("cls");
    setColor(10);
    cout << "Cofactor of Matrix\n\n";
    setColor(7);
    int size;
    cout << "Size of matrix: ";
    cin >> size;
    cout << endl;
    inputMatrix(v, size);
    cout << endl;
    printMatrix(v);
    setColor(10);
    cout << "\n\nCofactor:\n"
         << endl;
    setColor(7);
    auto cofactor = cofactorMatrix(v, v.size());
    printMatrix(cofactor);
    cout << endl;
    system("pause");
}
void handleAdjoint(Matrix &v)
{
    system("cls");
    setColor(10);
    cout << "Adjoint of Matrix\n\n";
    setColor(7);
    int size;
    cout << "Size of matrix: ";
    cin >> size;
    cout << endl;
    inputMatrix(v, size);
    cout << endl;
    printMatrix(v);
    setColor(10);
    cout << "\nAdjoint:\n"
         << endl;
    setColor(7);
    auto adjoint = adjointMatrix(v);
    printMatrix(adjoint);
    cout << endl;
    system("pause");
}
void handleScalarMultiplication(Matrix &v)
{
    system("cls");
    setColor(10);
    cout << "Scalar Multiplication\n\n";
    setColor(7);
    int row, col;
    getMatrixDimensions(row, col);
    checkMatrixSizeAndInput(v, row, col);
    cout << endl;
    printMatrix(v);
    double scalar;
    cout << "\nEnter scalar: ";
    cin >> scalar;
    auto r = scalarMultiply(v, scalar);
    setColor(10);
    cout << "\nResult:\n"
         << endl;
    setColor(7);
    printMatrix(r);
    cout << endl;
    system("pause");
}
