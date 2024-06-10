#include <windows.h>
#include "header/Determinant.h"
#include "header/Utils.h"
#include "header/MatrixOperations.h"

using namespace std;

void checkMatrixSizeAndInput(vector<vector<double>> &matrix, int row, int col)
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
int main()
{
    vector<vector<double>> matrix1;
    vector<vector<double>> matrix2;

    int choice;
    while (choice < 6)
    {
        system("cls");
        cout << "Matrix Operations\n\n";
        cout << "1. Determinant\n2. Transpose\n3. Matrix Addition\n4. Matrix Multiplication\n5. Inverse\n6. Exit" << endl;
        cout << "\nEnter choice: ";
        cin >> choice;

        matrix1.clear();
        matrix2.clear();

        switch (choice)
        {
        case 1:
        {
            system("cls");
            int size;
            cout << "Determinant\n\n";
            cout << "Size of matrix: ";
            cin >> size;
            cout << endl;
            inputMatrix(matrix1, size);
            cout << endl;
            printMatrix(matrix1);

            cout << "\nDeterminant: " << solveDeterminant(matrix1, matrix1.size());
            cout << endl;
            system("pause");
        }
        break;

        case 2:
        {
            system("cls");
            int row, col;
            cout << "Transpose\n\n";
            getMatrixDimensions(row, col);
            checkMatrixSizeAndInput(matrix1, row, col);

            printMatrix(matrix1);
            cout << endl;
            cout << "\nResult:" << endl;
            auto r = transpose(matrix1);
            printMatrix(r);
            system("pause");
        }
        break;

        case 3:
        {
            system("cls");
            cout << "Matrix Addition\n\n";
            int row, col;
            cout << "Matrix 1: " << endl;
            getMatrixDimensions(row, col);
            checkMatrixSizeAndInput(matrix1, row, col);

            cout << "\nMatrix 2: " << endl;
            checkMatrixSizeAndInput(matrix2, row, col);
            auto r = addMatrix(matrix1, matrix2);

            cout << "\nResult: " << endl;

            printMatrix(r);
            system("pause");
        }
        break;

        case 4:
        {
            system("cls");
            cout << "Matrix Multiplication\n\n";
            int row1, col1, row2, col2;
            cout << "Matrix 1: " << endl;
            getMatrixDimensions(row1, col1);
            checkMatrixSizeAndInput(matrix1, row1, col1);

            cout << "\nMatrix 2: " << endl;
            getMatrixDimensions(row2, col2);
            checkMatrixSizeAndInput(matrix2, row2, col2);
            auto r = multiplyMatrix(matrix1, matrix2);

            cout << "\nResult:" << endl;

            printMatrix(r);
            system("pause");
        }
        break;

        case 5:
        {
            system("cls");
            cout << "Inverse\n\n";
        }
        break;
        default:
            cout << "Terminated" << endl;
            break;
        }
    }

    return 0;
}
