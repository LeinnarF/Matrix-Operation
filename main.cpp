#include <sstream>
#include <windows.h>
#include "header/Handler.h"

using namespace std;
using Matrix = vector<vector<double>>;

int main()
{
    Matrix matrix1;
    Matrix matrix2;

    string input;
    int choice;
    bool loop = true;
    while (loop)
    {
        system("cls");
        setColor(10);
        cout << "=============================\n";
        cout << "     MATRIX OPERATIONS\n";
        cout << "=============================\n\n";

        setColor(7);
        cout << "   1. Determinant\n";
        cout << "   2. Transpose\n";
        cout << "   3. Matrix Addition\n";
        cout << "   4. Matrix Multiplication\n";
        cout << "   5. Inverse\n";
        cout << "   6. Cofactors\n";
        cout << "   7. Adjoint\n";
        cout << "   8. Scalar Multiplication\n";
        cout << "   0. Exit\n\n";

        setColor(6);
        cout << "Enter choice: ";
        getline(cin, input);
        stringstream ss(input);
        if (!(ss >> choice))
        {
            cout << "invalid input";
            continue;
        }

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
        case 8:
            handleScalarMultiplication(matrix1);
            break;
        default:
            cout << "Terminated" << endl;
            loop = false;
            break;
        }
    }
    return 0;
}
