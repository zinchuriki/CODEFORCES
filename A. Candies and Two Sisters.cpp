#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        
        // Your code for each test case here
        int n;
        cin>>n;
        if(n&1) cout<<n/2;
            else cout<<n/2-1;
            cout<<'\n';
        
    }
    return 0;
}