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

            int j=n;
            vector<int> ans(n);

            bool pos=true;

            for(int i=n-1; i>=0; --i){
                    if(vec[i]<=j){

                        ans[i]=j;
                        j--;

                    }
                    else{
                        pos=false;
                        break;
                    }

            }

            if(pos){

                for(int i=0; i<n; ++i) cout<<ans[i]<<" ";
                cout<<'\n'; 
            }
            else cout<<-1<<'\n';

            

    }
    
    return 0;
}