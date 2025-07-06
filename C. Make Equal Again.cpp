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

        if(n==1){
            cout<<0<<'\n';
            continue;
        }
        if(n==2){
            if(vec[0]!=vec[1])
            cout<<1<<'\n';
            continue;
        }

        int i=0;
        int j=n-1;

        while( i<n-1 && vec[i]==vec[i+1]) i++;
        while( j>=1 && vec[j]==vec[j-1]) j--;
        while( i<n && vec[i]==vec[j])
            i++;
            
        

        
        cout<<max(0,j-i)<<'\n';

    }
    
    return 0;
}