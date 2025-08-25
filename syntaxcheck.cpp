#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        string t = s;
        reverse(s.begin(), s.end());

        int n = s.size();
        vector<int> prev(n + 1), cur(n + 1);
        int maxi = 1;
        int id = 0;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {

                if (t[i - 1] == s[j - 1])
                {
                    cur[j] = 1 + prev[j - 1];
                    if (cur[j] > maxi)
                    {
                        id = i;
                        maxi = cur[j];
                    }
                }
                else
                    cur[j] = 0;
            }

            prev = cur;
        }

        string ans = "";

        while (maxi--)
        {
            ans += s[id];
            id--;
        }
        return ans;
    }
};

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
        if (n == 1)
            cout << 0 << '\n';
        else if (n == 2)
            cout << 4 << '\n';
        else
            cout << n * (n - 1) * (n - 1) * 2 + (n) * (n - 1) * (n - 2) + (n) * (n - 1) * (n - 2) * (n - 2) * 2;

        // n* (n-1)*(n-1)*2 + (n)*(n-1)*(n-2) + (n n-1 n-2 n-2) + n n-1 n-2  n-2
    }
    return 0;
}