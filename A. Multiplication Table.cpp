#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;
   cin>>n;
   long int x;
   cin>>x;
   
   int count=0;
   
   for(int i=1; i<=n; ++i){
       if(x%i==0){
           if(x/i<=n)
           count++;
       }
   }
   cout<<count;
return 0;

}