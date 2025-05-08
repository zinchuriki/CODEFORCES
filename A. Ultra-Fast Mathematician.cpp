#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  string s1,s2;
  cin>>s1>>s2;

  string s3="";
  for(int i=0; i<s1.size(); i++){
    if(s1[i]==s2[i])
    s3+='0';
    else s3+='1';
  }

  cout<<s3;

return 0;

}