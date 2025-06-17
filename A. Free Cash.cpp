#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   int n;
   cin>>n;

   pair<int,int> p;
   map<pair<int,int>,int> hash;
   int a,b;

int maxi=0;
   for(int i=0; i<n; ++i){
        cin>>a>>b;
        p.first=a;
        p.second=b;
        hash[p]++;
        maxi=max(maxi,hash[p]);
   }
   cout<<maxi;
    
    return 0;
}