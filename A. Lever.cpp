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
        vector<int> vec(n);
        int a;

        for (int i = 0; i < n; ++i)
            cin >> vec[i];
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a;
            ans += max(0, vec[i] - a);
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}