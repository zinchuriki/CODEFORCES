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
        //     a1 a2 a3 a4 .........an
        //     b1 b2 b3 b4........bm
        //     int k
        int n, m, k;
        cin >> n >> m >> k;
        int needed_a = k / 2, needed_b = k / 2;

        vector<int> first(n), second(m);

        for (int i = 0; i < n; ++i)
        {
            cin >> first[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> second[i];
        }
        map<int, pair<bool, bool>> hash;
        for (int i = 0; i < n; ++i){
if(i>k) continue;
            hash[first[i]] = {true, false};
        }
            

        int s = k / 2;
        int f = k / 2;
        for (int i = 0; i < m; ++i)
        {
            if(i>k) continue;
            if (hash.find(second[i]) != hash.end())
            {
                hash[second[i]] = {true, true};
            }
            else
            {
                hash[second[i]] = {false, true};
            }
        }

        bool pos = true;
            int db=0;
        for (int i = 1; i <= k; ++i)
        {
            if (hash.find(i) == hash.end())
            {
                pos = false;
                break;
            }
            pair<bool, bool> p = hash[i];
            if (p.first && !p.second)
                f--;
            else if (!p.first && p.second)
                s--;
                else db++;
            
        }

        if (!pos || f+s+db<k)
            cout << "NO";
        else
            cout << "YES";
        cout << '\n';
    }

    return 0;
}
