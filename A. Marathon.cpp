#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int ans=0;
        if(b>a) ans++;
        if(c>a) ans++;
        if(d>a) ans++;
        cout<<ans<<'\n';
        
        
    }
    return 0;
}