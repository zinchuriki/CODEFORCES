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

        int n;
        cin >> n;
        int a;
        int one = 0;
        int second = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a;
            if (a % 2 == 1)
                one++;
            else
                second++;
            if (i % 2 != a % 2)
                ans++;
        }

        if (n % 2 == 0)
        {
            if (one == second)
                cout << ans / 2 << '\n';
            else
                cout << -1 << '\n';
        }
        else
        {
            if (second == n / 2 + 1)
                cout << ans / 2 << '\n';
            else
                cout << -1 << '\n';
        }
    }
    return 0;
}