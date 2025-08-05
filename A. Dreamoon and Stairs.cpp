#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0;
    cin >> n >> m;
    if (m > n)
        cout << -1;
    else if (m == n)
        cout << m;
    else

        cout << (int)ceil((double)(n / 2 + n % 2) / m) * m;

    return 0;
}