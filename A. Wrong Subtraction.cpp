#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

//  the last digit of the number is non-zero, she decreases the number by one;
// the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n,k;
   cin>>n>>k;

   for(auto i=0; i<k ;i++){
        if(n%10>0)
        n--;
        else{
            n/=10;
        }
   }
   cout<<n;



return 0;

}