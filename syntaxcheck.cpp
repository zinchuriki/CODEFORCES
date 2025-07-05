#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    string t=s;
    reverse(s.begin(),s.end());
    int n=s.size();
    
    vector<int> prev(n),cur(n);
    
    for(int i=1; i<=n; ++i){
      for(int j=1; j<n; ++j){
          
          if(s[i-1]==t[j-1])
          cur[j]=1+prev[j-1];
          else cur[j]=max(prev[j],cur[j-1]);
      }
      prev=cur;
    }
    
    cout<<prev[n];
return 0;

}