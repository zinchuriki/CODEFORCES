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
        int n, p;
        cin >> n >> p;
        vector<int> max_no(n), cost(n);
        vector<pair<int, int>> vec(n);

        for (int i = 0; i < n; ++i)
            cin >> max_no[i];
        for (int i = 0; i < n; ++i)
            cin >> cost[i];

        for (int i = 0; i < n; ++i)
        {
            vec[i].first = cost[i];
            vec[i].second = max_no[i];
        }
        sort(vec.begin(), vec.end());

        long int ans = p;
        int left = n - 1;

        for (int i = 0; i < n; ++i)
        {
            if (left == 0)
                break;
            int temp = min(left, max_no[i]);
            ans += min(p * temp, cost[i] * temp);
            left -= temp;
        }
        if (left > 0)
            ans += left * p;

        cout << ans << '\n';
    }
    return 0;
}