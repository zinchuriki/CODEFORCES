#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int n;
  cin>>n;

  int a,b;
  int sum=0,maximum=INT_MIN;

  for(int i=0; i<n; i++){
    cin>>a>>b;
    sum+=b-a;
    maximum=max(maximum,sum);

  }
  cout<<maximum;
return 0;

}