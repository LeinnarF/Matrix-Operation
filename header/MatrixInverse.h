#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include "../header/Determinant.h"
#pragma once

using namespace std;

vector<vector<double>> cofactorSubMatrix(vector<vector<double>> &v, int exRow, int exCol, int size);
double solveCofactor(vector<vector<double>> &v, int size);
vector<vector<double>> cofactorMatrix(vector<vector<double>> &v, int size);
vector<vector<double>> adjointMatrix(vector<vector<double>> &v);
vector<vector<double>> inverseMatrix(vector<vector<double>> &v);