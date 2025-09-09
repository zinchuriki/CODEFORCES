#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> calculateSpan(vector<int> &arr)
    {
        vector<int> ans;
        ans.push_back(1);
        stack<int> s1, s2;
        int n = arr.size();
        s1.push(arr[0]);
        for (int i = 1; i < n; ++i)
        {
            if (s1.top() > arr[i])
            {

                ans.push_back(1);
            }
            else
            {

                int count = 0;

                if (s1.top() <= arr[i])
                    count = s1.size() + s2.size() + 1;
                else
                {
                    while (!s1.empty() && s1.top() <= arr[i])
                    {
                        count++;
                        s2.push(s1.top());
                        s1.pop();
                    }
                }

                ans.push_back(count);
            }
            s1.push(arr[i]);
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
        }
        cout << '\n';
    }
    return 0;
}