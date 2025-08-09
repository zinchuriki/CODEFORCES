#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;

    // atleast a in front at most b at  back bruh
    int people_left = n - a - 1;
    people_left += n - b - 1;
    cout << people_left;

    return 0;
}