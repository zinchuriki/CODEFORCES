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
        int count = 0;
        int n, k;
        int mini = INT_MAX;
        cin >> n >> k;
        int a;
        for (int i = 0; i < n; ++i)
        {
            cin >> a;
            if (a % 2 == 0)
                count++;
            if (a % k == 0)
            {
                mini = 0;
            }
            mini = min(mini, k - a % k);
        }
        if (mini == 0)
        {
            cout << 0 << '\n';
        }
        else if (k == 2)
        {
            if (count > 0)
                cout << 0 << '\n';
            else
                cout << 1 << '\n';
        }
        else if (k == 3)
        {
            cout << mini << '\n';
        }
        else if (k == 4)
        {
            if (count >= 2)
                cout << 0 << '\n';
            else if(count==1) cout<<1<<'\n';
            else cout<<min(mini,2)<<'\n';
        }
        else
            cout << mini << '\n';
    }
    return 0;
}