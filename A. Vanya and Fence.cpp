#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n,a,h,ans=0;
   cin>>n>>h;

   for(int i=0; i<n; ++i){
    cin>>a;
    if(a>h)
    ans+=2;
    else ans+=1;

   }

   cout<<ans;
return 0;

}