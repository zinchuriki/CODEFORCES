#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        
        map<int,int> hash1,hash2;
        int n,k;
        cin>>n>>k;
        int a;

        for(int i=0; i<n; ++i){
            cin>>a;
            hash1[a%k]++;
        }
        
        for(int i=0; i<n; ++i){
            cin>>a;
            hash2[a%k]++;
        }
        if(hash1==hash2)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        
    }
    return 0;
}