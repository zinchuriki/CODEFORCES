#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin>>tt;
    while(tt--){

        int n,m,k;
        cin>>n>>m>>k;
        
        
         if( m==0){
            cout<<0<<'\n';
            continue;
        }
        
        if(n==k){
                
                if(m<=1)
                cout<<1<<'\n';
                else cout<<0<<'\n';
                
                continue;
            
        }

       

        if(n/k<m){

            int a=m-n/k,b=k-1;
            if(b>=a)
            cout<<n/k-1<<'\n';
            else cout<<n/k-(int)ceil((double)a/b)<<'\n';

        }
        else cout<<m<<'\n';

    }
    
    return 0;
}