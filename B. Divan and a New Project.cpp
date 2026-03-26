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
        vector<pair<long long int, int>> vec(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i].first;
            vec[i].second = i;
        }
        vector<int> pos(n);
       long long int count = 0;
        long long int ans = 0;
        sort(vec.begin(), vec.end(), greater<pair< long long int,int>>());
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
                count++;
            ans += 2 * count * vec[i].first;
            int p = count;
            if (i & 1)
                p = -p;
            pos[vec[i].second] = p;
        }

        cout << ans << '\n';
        cout << 0 << " ";

        for (int i = 0; i < n; ++i)
        {
            cout << pos[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}