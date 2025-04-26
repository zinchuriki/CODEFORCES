// A. Matrix Minors
// time limit per test3 seconds
// memory limit per test256 megabytes
// You're given an n×n
//  matrix A
// . The minor Mij
//  of A
//  in (i,j)
//  is the determinant of the matrix obtained from A
//  by deleting the i
// -th row and the j
// -th column. Your task is to find all minors of A
// .

// Input
// First line of input contains a single integer n
//  (2≤n≤500).

// The i
// -th of the following n
//  lines contains n
//  numbers Ai1,…,Ain
// , the i
// -th row of A
//  (0≤Aij<109+7
// ).

// Output
// Print n
//  lines, containing n
//  numbers each.

// The i
// -th line should contain Mi1,…,Min
// , the minors of A
// .

// Since the resulting numbers can be very big, print them modulo 109+7
// .

#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

vector<vector<int>> getminor(vector<vector<int>> &matrix, int row, int col)
{
    vector<vector<int>> minor;
    for (int i = 0; i < matrix.size(); i++)
    {
        if (i == row)
            continue;
        vector<int> the_row;
        for (size_t j = 0; j < matrix[i].size(); j++)
        {
            if (j == col)
                continue;
            the_row.push_back(matrix[i][j]);
        }
        minor.push_back(the_row);
    }
    return minor;
}

int determinant(vector<vector<int>> &matrix)
{
    if (matrix.size() == 1)
        return matrix[0][0];
    if (matrix.size() == 2)
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    int det = 0;
    for (size_t i = 0; i < matrix[0].size(); i++)
    {
        vector<vector<int>> minor = getminor(matrix, 0, i);
        det += (i % 2 == 0 ? 1 : -1) * matrix[0][i] * determinant(minor);
    }
    return det;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    vector<vector<int>> matrix2(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            vector<vector<int>> minor = getminor(matrix, i, j);
            matrix2[i][j] = determinant(minor);
            cout << matrix2[i][j]%(1000000007) << " ";
        }
        cout << "\n";
    }
    return 0;
}