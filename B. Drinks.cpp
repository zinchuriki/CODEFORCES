#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;
   cin>>n;
   float a=0;
   float b;
   for(int i=0; i<n; i++){
    cin>>b;
        a+=b/100;
   }

   cout<<(a/n)*100;
return 0;

}