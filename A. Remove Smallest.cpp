#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
  int tt;
  cin>>tt;
  while(tt--){

        int n;
        cin>>n;
        vector<int> vec(n);

        for(int i=0; i<n; ++i) cin>>vec[i];

        sort(vec.begin(),vec.end());
        bool pos=true;
        for(int i=1; i<n; ++i){

                if(vec[i]-vec[i-1]>1){
                    pos=false;
                    break;
                }

        }

        if(pos) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';

  }
    
    return 0;
}