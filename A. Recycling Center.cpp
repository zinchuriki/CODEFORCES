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

        int n, c;
        cin >> n >> c;
        vector<int> vec(n);
        priority_queue<int> pq;
        int a;
        for (int i = 0; i < n; ++i)
        {
            cin >> a;
            pq.push(a);
        }
        int take = 0;
        int ans = 0;
        while (!pq.empty())
        {

            if (pq.top() * (int)pow(2, take) > c)

                ans++;

            else
                take++;

            pq.pop();
        }
        cout << ans << '\n';
    }
    return 0;
}