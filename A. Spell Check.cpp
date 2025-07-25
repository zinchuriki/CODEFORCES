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

        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n != 5)
        {
            cout << "NO" << '\n';
            continue;
        }

        unordered_map<char, int> hash, hash2;
        string t = "Timur";
        for (int i = 0; i < 5; ++i)
            hash[t[i]]++;

        for (int i = 0; i < n; ++i)
            hash2[s[i]]++;
        if (hash == hash2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}