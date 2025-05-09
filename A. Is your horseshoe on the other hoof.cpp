#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   long int a,b,c,d;
   cin>>a>>b>>c>>d;
   map<long int,int> hash;
   hash[a]++;
   hash[b]++;
   hash[c]++;
   hash[d]++;
   int ans=0;
for(auto it=hash.begin(); it!=hash.end(); ++it){
    ans+=it->second-1;
}
cout<<ans;
return 0;

}