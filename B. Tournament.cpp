#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
  int tt;
  cin>>tt;
  while(tt--){
        int n,j,k;
        vector<int> vec(n);
            int maxi=INT_MIN;
        for(int i=0; i<n; ++i){
cin>>vec[i];
maxi=max(maxi,vec[i]);
        } 

      

        if(k>1)
        cout<<"YES"<<'\n';
        else{
            if(vec[j-1]==maxi)
            cout<<"YES"<<'\n';
            else 
cout<<"NO"<<'\n';
        } 

    

  }
    
    return 0;
}