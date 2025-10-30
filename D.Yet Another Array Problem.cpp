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

        int n;
        cin >> n;
        vector<int> vec = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199
};
        int ans = 0;
        vector<long long int> nums(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
            if (ans == 0)
            {
                for (int i = 0; i < (int)vec.size(); ++i)
                {
                    if (nums[i] % (long long int)vec[i] == 0)
                    {
                        ans = vec[i];
                        break;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

