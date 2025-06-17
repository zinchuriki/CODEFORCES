#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
  int tt;
  cin>>tt;
  while(tt--){
    float x,y,k;
    cin>>x>>y>>k;

    cout<<(long long int)ceil((double)(k+k*y-1)/(x-1))+ k<<'\n';

  }
    
    return 0;
}