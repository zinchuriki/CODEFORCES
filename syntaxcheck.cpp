#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int alternate(string s)
{
    int n = s.size(), ans = 0;
    vector<bool> vec(26, false);
    for (int i = 0; i < n - 1; ++i)
    {
        char b = s[i + 1];
        if (vec[s[i] - 'a'] == true || vec[b - 'a'] == true)
            continue;
        char b = s[i + 1];
        string temp = "";
        temp += s[i];
        vec[b - 'a'] = true;
        vec[s[i] - 'a'] = true;
        for (int j = i + 1; j < n; ++j)
        {
            if (s[j] == s[i] || s[j] == b)
                temp += s[j];
            int si = temp.size();
            if (s[si - 1] == s[si - 2])
            {
                temp = "";
                break;
            }
        }
        ans = max(ans, (int)temp.size());
    }
    return ans;
}

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