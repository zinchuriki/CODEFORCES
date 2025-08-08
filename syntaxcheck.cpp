#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<long int> pref;
    int n;
    cin >> n;
    long int sum = 0;
    int a, b;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        sum += a;
        pref.push_back(sum);
    }

    int q;

    for (int i = 0; i < q; ++i)
    {
        cin >> a >> b;
        if (a == 1)
            cout << pref[b - 1] << '\n';
        else
            cout << pref[b - 1] - pref[a - 1] << '\n';
    }

    return 0;
}