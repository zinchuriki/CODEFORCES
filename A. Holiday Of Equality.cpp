#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   int n;
   cin>>n;
   vector<int> a(n);

   for(int i=0; i<n; ++i) cin>>a[i];

   int ans=0,maxi=*max_element(a.begin(),a.end());
   for(int i=0; i<n; ++i) ans+=maxi-a[i];

   cout<<ans;
    
    return 0;
}