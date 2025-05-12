#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        long int a,b;
        cin>>a>>b;
        cout<<(long long int)ceil(double(a)/b)*b-a<<'\n';
        
        
    }
return 0;

}