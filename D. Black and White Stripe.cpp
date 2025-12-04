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
        int n,k;
        cin>>n>>k;
        char a;
        string s="";
        for(int i=0; i<n; ++i){
            cin>>a;
            s+=a;
        }
        int ans=k;
        int b=0,w=0;
        for(int i=0; i<k; ++i){
                if(s[i]=='B')b++;
                else w++;
        }
        int l=0,r=k;
        ans=min(ans,w);
        while(l<n && r<n){
            if(s[l]=='B') b--;
            else w--;
            if(s[r]=='B') b++;
            else w++;
            ans=min(ans,w);
            l++;
            r++;
        }
        ans=min(ans,w);
        cout<<ans<<'\n';

        
    }
    return 0;
}