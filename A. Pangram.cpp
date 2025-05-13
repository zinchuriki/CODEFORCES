#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int n;
  cin>>n;
  string s;
  cin>>s;
  map<char,int> hash;

  for(int i=0; i<n;i++){
   
        hash[tolower(s[i])]++;
    
  }

  if(hash.size()==26)
  cout<<"YES";
  else cout<<"NO";
return 0;

}