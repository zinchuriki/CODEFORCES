#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int k;
  cin>>k;
  string s;
  cin>>s;

  map<char,int> hash;

  for(int i=0; i<s.size(); ++i){
    hash[s[i]]++;
  }

  string ans="";
  bool flag=true;;
  for(auto it=hash.begin(); it!=hash.end(); ++it){
    if(it->second%k!=0)
    {
        flag=false;
        break;
    }
    int a=it->second/k;
    while(a--){
        ans+=it->first;
    }

  }

  if(flag){
  for(int i=0; i<k; ++i)
  cout<<ans;}
  else cout<<-1;
    
    return 0;
}