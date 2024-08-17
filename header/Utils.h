#include <windows.h>
#include <iostream>
#include <vector>
#include <iomanip>
#pragma once

using namespace std;

void setColor(int color);
void printMatrix(vector<vector<double>> &v);
void inputMatrix(vector<vector<double>> &v, int size);
void inputMatrix(vector<vector<double>> &v, int row, int col);