#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; ++i)
        cin >> vec[i];

    int sum = 0;

    vector<int> forw(n), back(n);
    forw[0] = vec[0];
    back[n - 1] = vec[n - 1];
    int sum1 = 0, sum2 = 0;
    if (n == 1)
    {
        cout << max(0, vec[0]);
        return 0;
    }
    int ansi = INT_MIN;
    for (int i = 1; i < n; ++i)
    {
        forw[i] = max(forw[i - 1], forw[i - 1] + vec[i]);
        ansi = max(ansi, forw[i]);
    }

    for (int i = n - 2; i >= 0; --i)
        back[i] = max(back[i + 1], back[i + 1] + vec[i]);
    int ans = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        ans = max(ans, forw[i - 1] + back[i + 1]);
    }

    cout << max(ans, ansi);

    return 0;
}