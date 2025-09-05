#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int ans = 0;
    int l = 0, r = 1;
    long long sum = a[0];k
    if (sum == k)
        ans = 1;
    int n = a.size();
    while (l < n && r < n)
    {
        sum += a[r];
        if (sum == k)
        {

            ans = max(ans, r - l + 1);
            r++;
            sum -= a[l];
            l++;
        }
        else
        {
            if (sum > k)
            {
                sum -= a[l];
                l++;
            }
            else
            {
                r++;
            }
        }
    }

    return ans;
}

int cal(vector<int> &vec)
{

    int n = vec.size();
    int l = vec[0], r = vec[1];
    for (int i = 2; i < n; ++i)
    {

        if (i % 2 == 0)
        {

            if (l < r)
                l = vec[i];
            else
                r = vec[i];
        }

        else
        {
            if (l < r)
                r = vec[i];
            else
                l = vec[i];
        }
    }
    cout << min(l, r) << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {

        int n, q;
        cin >> n >> q;
        int a, b;

        vector<int> vec(n);

        for (int i = 0; i < n; ++i)
            cin >> vec[i];
        vector<pair<int, int>> arr(q);
        for (int i = 0; i < q; ++i)
            cin >> arr[i].first >> arr[i].second;

        for (int i = 0; i < q; ++i)
        {
            vec[arr[i].first - 1] = arr[i].second;
            cal(vec);
        }
        cout << '\n';
    }
    return 0;
}