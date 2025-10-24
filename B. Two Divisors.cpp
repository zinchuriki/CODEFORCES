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
        long long int a,b;
        cin>>a>>b;
        if(b%a==0)
            cout<<lcm(a,b)*(b/a);
            else cout<<lcm(a,b);
            cout<<'\n';
        
        
    }
    return 0;
}