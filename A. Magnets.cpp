#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;
   cin>>n;
   string s;
   string prev="";
   cin>>s;
   prev=s;
   int ans=0;

        for(int i=1;i<n; ++i){
                cin>>s;
                if(prev!=s)
                ans++;

                prev=s;
        }
ans++;

cout<<ans;


return 0;

}