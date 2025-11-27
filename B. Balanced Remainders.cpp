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
        int a;
        vector<int> vec(3);
        for (int i = 0; i < n; ++i)
        {
            cin >> a;
            vec[a % 3]++;
        }

        int ans = 0;
        int opt = n / 3;
        if (vec[0] < opt)
        {
            int needed = opt - vec[0];
            int temp = min(needed, vec[2] - opt);
            if (vec[2] > opt)
            {
                ans += temp;
                vec[0] += temp;
                vec[2] -= temp;
                needed -= temp;
            }

            if (vec[0] < opt)
            {
                ans += 2 * needed;
                vec[1] -= needed;
            }
        }

        if (vec[1] < opt)
        {
            int needed = opt - vec[1];
            int temp = min(needed, vec[0] - opt);
            if (vec[0] > opt)
            {
                ans += temp;
                vec[1] += temp;
                vec[0] -= temp;
                needed -= temp;
            }

            if (vec[1] < opt)
            {
                ans += 2 * needed;
                vec[2] -= needed;
            }
        }
        if (vec[2] < opt)
        {
            int needed = opt - vec[2];
            int temp = min(needed, vec[1] - opt);
            if (vec[1] > opt)
            {
                ans += temp;
                vec[2] += temp;
                vec[1] -= temp;
                needed -= temp;
            }

            if (vec[2] < opt)
            {
                ans += 2 * needed;
                vec[0] -= needed;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}