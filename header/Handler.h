#include <iostream>
#include "../header/Utils.h"
#include "../header/MatrixOperations.h"
#include "../header/MatrixInverse.h"
#include "../header/Determinant.h"
#pragma once

using namespace std;
using Matrix = vector<vector<double>>; // I'm a bit lazy

void checkMatrixSizeAndInput(Matrix &matrix, int row, int col);
void getMatrixDimensions(int &row, int &col);
void handleDeterminant(Matrix &v);
void handleTranspose(Matrix &v);
void handleMatrixAddition(Matrix &a, Matrix &b);
void handleMatrixMultiplication(Matrix &a, Matrix &b);
void handleInverse(Matrix &v);
void handleCofactor(Matrix &v);
void handleAdjoint(Matrix &v);
void handleScalarMultiplication(Matrix &v);
