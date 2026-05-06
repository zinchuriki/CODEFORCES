#include <bits/stdc++.h>
using namespace std;
vector<long int> vec;

long int cal(long int n, long int k)
{
    if (n <= 0)
        return 1;

    if (vec[n] != -1)
        return vec[n];

    long int sum = 0;

    for (int i = k; i >= 1; --i)
    {
        sum += cal(n - i, k);
    }
    return vec[n] = sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here

    long int n, k;
    cin >> n >> k;
    long int MOD = 1e9;
    vec.resize(max(k, n) + 1, -1);
    for (int i = 0; i < k; ++i)
        vec[i] = 1;

    cout << cal(n, k);

    return 0;
}