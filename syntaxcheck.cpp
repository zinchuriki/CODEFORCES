#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> vec(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> vec[i][j];
    }

    for (int j = 0; j < n; ++j)
    {
        for (int i = n - 1; i >= 0; --i)
            cout << vec[i][j] << " ";
        cout << '\n';
    }

    return 0;
}