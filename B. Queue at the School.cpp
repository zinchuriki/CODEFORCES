#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;

  for(int i=0; i<t; i++){
    for(int j=1; j<n; j+=2){
                if(s[j-1]=='B' && s[j]=='G')
                swap(s[j-1],s[j]);
    }

    cout<<s;


  }


return 0;

}