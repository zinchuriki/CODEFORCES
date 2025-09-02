#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;



bool check(vector<vector<int>> &sudoku, int row, int col, int a)
{

    for (int i = 0; i < 9; ++i)
        if (sudoku[row][i] == a || sudoku[i][col] == a)
            return false;

    int row1 = (row / 3) * 3;
    int col1 = (col / 3) * 3;

    for (int i = row1; i < row1 + 3; ++i)
    {
        for (int j = col1; j < col1 + 3; ++j)
            if (sudoku[i][j] == a)
                return false;
    }

    return true;
}

void solve(vector<vector<int>> &sudoku, vector<pair<int, int>> &vec, int idx, bool &found)
{

    if (idx >= vec.size())
    {
        found = true;
        return;
    }
    int row = vec[idx].first, col = vec[idx].second;
    for (int i = 1; i <= 9; ++i)
    {

        if (check(sudoku, row, col, i))
        {
            sudoku[row][col] = i;
            solve(sudoku, vec, idx + 1, found);
        }
        if (found)
            return;

        sudoku[row][col] = 0;
    }
}

void solveSudoku(vector<vector<int>> &sudoku)
{
    // Write your code here
    // No need to print the final sudoku
    // Just fill the values in the given matrix

    vector<pair<int, int>> vec;

    pair<int, int> p;
    bool found = false;

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {

            if (sudoku[i][j] == 0)
            {
                p.first = i, p.second = j;
                vec.push_back(p);
            }
        }
    }
    solve(sudoku, vec, 0, found);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here

    return 0;
}