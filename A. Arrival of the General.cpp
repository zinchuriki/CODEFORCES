#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;
   cin>>n;
   vector<int> vec;
   int max=INT_MIN;
   int max_p,min_p;
   int min=INT_MAX;
   int a;
   for(int i=0; i<n; i++){
        cin>>a;
        if(a>max)
        {
            max=a;
            max_p=i;

        }
        if(a<=min){
            min=a;
            min_p=i;
        }
   }
    if(max_p>min_p)
   cout<<max_p+n-2-min_p;
   else cout<<max_p+n-1-min_p;
return 0;

}