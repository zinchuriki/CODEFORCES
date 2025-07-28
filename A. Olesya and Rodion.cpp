#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;

    if (t == 1 || t == 2 || t == 3 || t == 4 || t == 5 || t == 6 || t == 7 || t == 8 || t == 9)
        for (int i = 0; i < n; ++i)
            cout << t;
    else
    {
        if (n < 2)
            cout << -1;
        else
        {
            cout << 1;
            for (int i = 0; i < n - 1; ++i)
                cout << 0;
        }
    }

    return 0;
}