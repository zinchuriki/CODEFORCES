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
        unordered_map<char, int> hash1, hash2;
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> pref(n, 0), suf(n, 0);

        for (int i = 0; i < n; ++i)
        {
            hash1[s[i]]++;
            hash2[s[n - i - 1]]++;
            pref[i] = hash1.size();
            suf[n-i-1] = hash2.size();
        }
        int maxi = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            maxi = max(maxi, pref[i]+ suf[i + 1]);
        }

        cout << maxi << '\n';
    }
    return 0;
}