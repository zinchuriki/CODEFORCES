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
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int ans = 0;

        if (a1 >= b1)
        {
            int cnt = 0;
            if (a1 != b1)
                cnt++;
            if (a2 > b2 || (cnt > 0 && a2 == b2))
                ans++;
        }
        if (a1 >= b2)
        {
            int cnt = 0;
            if (a1 != b2)
                cnt++;
            if (a2 > b1 || (cnt > 0 && a2 == b1))
                ans++;
        }
        if (a2 >= b1)
        {
            int cnt = 0;
            if (a2 != b1)
                cnt++;

            if (a1 > b2 || (cnt > 0 && a1 == b2))
                ans++;
        }
        if (a2 >= b2)
        {
            int cnt = 0;
            if (a2 != b2)
                cnt++;
            if (a1 > b1 || (cnt > 0 && a1 == b1))
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}