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
        long long w, h;
        cin >> w >> h;

        long long horizontal_first_h0, horizontal_last_h0, vertical_first_xw, vertical_last_x0, temp;
        long long horizontal_first_hh, horizontal_last_hh, vertical_first_x0, vertical_last_xw;

        int k;
        cin >> k;
        for (int i = 0; i < k; ++i)
        {
            if (i == 0)
                cin >> horizontal_first_h0;
            else if (i == k - 1)
                cin >> horizontal_last_h0;
            else
                cin >> temp;
        }
        cin >> k;
        for (int i = 0; i < k; ++i)
        {
            if (i == 0)
                cin >> horizontal_first_hh;
            else if (i == k - 1)
                cin >> horizontal_last_hh;
            else
                cin >> temp;
        }

        cin >> k;
        for (int i = 0; i < k; ++i)
        {
            if (i == 0)
                cin >> vertical_first_x0;
            else if (i == k - 1)
                cin >> vertical_last_x0;
            else
                cin >> temp;
        }
        cin >> k;
        for (int i = 0; i < k; ++i)
        {
            if (i == 0)
                cin >> vertical_first_xw;
            else if (i == k - 1)
                cin >> vertical_last_xw;
            else
                cin >> temp;
        }

        cout << max(abs(horizontal_first_h0 - horizontal_last_h0) * h, max(abs(horizontal_first_hh - horizontal_last_hh) * h, max(abs(vertical_first_x0 - vertical_last_x0) * w, abs(vertical_first_xw - vertical_last_xw )* w)))<<'\n';
    }
    return 0;
}