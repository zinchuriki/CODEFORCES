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
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        unordered_map<int, int> hash;
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
            hash[vec[i]]++;
        }
        bool pos = true;
        for (auto it = hash.begin(); it != hash.end(); ++it)
        {
            if (it->second % k != 0)
            {
                pos = false;
                break;
            }
        }

        if (!pos)
            cout << 0 << '\n';
        else
        {
            long long int ans = n;

            int l = 0, r = 1;
            unordered_map<int, int> temp;
            temp[vec[0]]++;
            while (l < n && r < n)
            {
                temp[vec[r]]++;
                int temp1 = temp[vec[r]];
                if (temp1 * k <= hash[vec[r]])
                    ans++;
                else
                {
                    while (temp[vec[r]] * k > hash[vec[r]])
                    {
                        temp[vec[l]]--;
                        l++;
                    }
                }

                r++;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}