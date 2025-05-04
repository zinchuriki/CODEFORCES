#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int n;
  cin>>n;
  int a;
  bool flag=true;
  for(int i=0; i<n; i++){
    cin>>a;
    if(a==1){
        cout<<"HARD";
        flag=false;
        break;
    }
  }
  if(flag)
  cout<<"EASY";
return 0;

}