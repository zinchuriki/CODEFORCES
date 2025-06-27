#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin>>tt;
     while(tt--){

        long int n,k,q;
        cin>>n>>k>>q;

       long long int count=0,ans=0;
            long int a;

        for(int i=0; i<n; ++i){
            cin>>a;
            if(a<=q){
                count++;
                 if(count>=k){
                    ans+=count-k+1;
                }
            }
            else
                count=0;
        }
        cout<<ans<<'\n';


     }
    
    return 0;
}