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

        string s;
        cin >> s;
        int n = s.size();
        int ones = 0, zeroes = 0;
        for (int i = 0; i < n; ++i)
        {

            if (s[i] == '1')
                ones++;
            else
                zeroes++;
        }
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {

            if (s[i] == '1')
            {
                if (zeroes > 0)
                    zeroes--;
                else
                {
                    ans++;
                    ones--;
                }
            }
            else
            {
                if (ones > 0)
                    ones--;
                else
                {
                    zeroes--;
                    ans++;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}