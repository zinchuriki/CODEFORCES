#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);
    int l = 0, r = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];
        if (vec[i] <= 0)
            l = i;
    }

    r = l + 1;

    while (l >= 0 && r < n)
    {

        if (abs(vec[l]) < abs(vec[r]))
        {
            cout << vec[r] * vec[r] << " ";
            r++;
        }

        else
        {
            cout << vec[l] * vec[l] << " ";
            l--;
        }
    }

    while (l >= 0)
        cout << vec[l] * vec[l] << " ";
    while (r < n)
        cout << vec[r] * vec[r] << " ";

    return 0;cc
}