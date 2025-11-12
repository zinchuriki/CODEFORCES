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
        int n,r,b;
        cin>>n>>r>>b;
        int times=r/b;
        string ans="";
        while(r>0 && b>0){

            for(int i=0; i<min(times,r); ++i) ans+='R';
            if(b>0)
            ans+='B';

            r-=min(times,r);
            b-=1;
             

        }
        cout<<ans<<'\n';
        
    }
    return 0;
}