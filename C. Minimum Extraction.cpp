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
         vector<long int> vec(n);
         for(int i=0; i<n; ++i) cin>>vec[i];

         sort(vec.begin(),vec.end());
            long int no_to_minus=0;
            long int maxi=INT_MIN;

         for(int i=0; i<vec.size(); ++i){
                    vec[i]-=no_to_minus;
                maxi=max(maxi,vec[i]);
                no_to_minus+=vec[i];
                
         }
         cout<<maxi<<'\n';

    }
    
   


    
    return 0;
}