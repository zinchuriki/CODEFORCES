#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s1 = "I hate that";
    string s2 = "I love that";
    string s3 = "I hate it";
    string s4 = "I love it";
    string ans = "";
    for (int i = 1; i < n; ++i) {
        if (i & 1)
            ans += s1;
        else
            ans += s2;

        ans += " ";
    }
    if (n & 1)
        ans += s3;
    else ans += s4;

    cout << ans;
    return 0;

}