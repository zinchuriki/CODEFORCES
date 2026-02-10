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
        vector<int> r(n, 0);
        int temp = 0;
        int a;
        for (int i = 0; i < n; ++i)
        {
            cin >> a;
            temp += a;
            r[i] = a;
        }
        int m;
        cin >> m;
        vector<int> b(m, 0);
        temp = 0;
        for (int i = 0; i < m; ++i)
        {
            cin >> a;
            temp += a;
            b[i] = a;
        }

        int ans = 0;
        temp = 0;
        for (int i = 0; i < n; ++i)
        {
            temp = r[i];
            ans = max(ans, temp);
            for (int j = 0; j < m; ++j)
            {
                temp += b[j];
                ans = max(ans, temp);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}