#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        
       string s;
       cin>>s;
       int l=s.size()/2-1;
       int r=s.size()-1; 
       if(s.size()%2!=0){
        cout<<"NO"<<'\n';
        continue;
       }
       bool pos=true;
       while(l>=0){
        if(s[l]!=s[r]){
                pos=false;
                break;
        }
        l--;
        r--;
       }
       if(pos) cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';
        
        
    }
    return 0;
}