#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {

        vector<int> vec(3);

        for (int i = 0; i < 3; ++i)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        cout << vec[1] << '\n';
    }
    return 0;
}