#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n, t;
    cin >> n >> t;
    vector<int> vec(n - 1);
    for (int i = 0; i < n - 1; ++i)
        cin >> vec[i];

    int count = 0;

    int i = 0;
    bool pos = false;
    while (i < n)
    {
        if (i > t - 1)
            break;
        if (i == t - 1)
        {
            pos = true;
            break;
        }
        i = i + vec[i];
    }
    if (pos)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}