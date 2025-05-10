#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   long long int n;
   cin>>n;
   if(!(n&1)){
    cout<< n/2;
   }else{
    cout<< (long long int)-ceil((double)n/2);
   }

return 0;

}