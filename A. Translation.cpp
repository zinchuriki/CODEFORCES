#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   string s,t;
   cin>>s>>t;
   reverse(s.begin(),s.end());
   if(s==t)
   cout<<"YES";
   else cout<<"NO";
return 0;

}