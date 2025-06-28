#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin>>tt;
     while(tt--){

           long  long int x,y,a,b;
            cin>>x>>y>>a>>b;
             long long int ans=abs(x-y)*a;
            
            if(2*a<=b)
            ans+=min(x,y)*a*2;
            else  ans+= min(x,y)*b;

            cout<<ans<<'\n';
     }
    
    return 0;
}