#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int a,b,c;
        cin>>a>>b>>c;

        if(a==b+c || b==c+a || c==a+b)
        cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

        

        
        
    }
return 0;

}