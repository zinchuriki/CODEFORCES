#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int m,n;
   cin>>m>>n;
   if(m%2==0 && n%2==0)
   cout<<(m/2)*n<<'\n';
   if(m%2!=0 && n%2!=0)
   cout<<(m/2)*n +n/2<<'\n';
   if(m%2==0 && n%2!=0)
   cout<<(m/2)*n<<'\n';
   if(m%2!=0 && n%2==0)
   cout<<(n/2)*m<<'\n';
   
return 0;

}