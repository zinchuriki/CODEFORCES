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

        int a, b, n, s;
        cin >> a >> b >> n >> s;
        // n*x<=s
        int x = s / n;
        bool pos = true;

        if (min(a, x) * n + b >= s)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
