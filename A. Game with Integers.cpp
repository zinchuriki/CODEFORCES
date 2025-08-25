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

        // Your code for each test case here
        int n;
        cin >> n;
        if ((n - 1) % 3 == 0 || (n + 1) % 3 == 0)
            cout << "First";
        else
            cout << "Second";
        cout << '\n';
    }
    return 0;
}