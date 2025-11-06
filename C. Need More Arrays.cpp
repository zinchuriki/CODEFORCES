#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        
       int n;
       cin>>n;
       vector<int> vec(n);
       for(int i=0; i<n; ++i) cin>>vec[i];

       int prev=vec[0],cur=vec[0];

       int ans=1;

       for(int i=0; i<n; ++i){
        if(vec[i]-prev>1){
            prev=vec[i];
            ans++;
        } 

      

       }
         cout<<ans<<'\n';


        
        
    }
    return 0;
}