#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int i=0; i<n; ++i) cin>>vec[i];
  sort(vec.begin(),vec.end());
bool doit=true;
  for(int i=n-1; i>=2; --i){
        
    if(vec[i]<vec[i-1]+vec[i-2])
    {
        cout<<"YES";
        doit=false;
        break;

    }

  }
  if(doit)
  cout<<"NO";
    return 0;
}