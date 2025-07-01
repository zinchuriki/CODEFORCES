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
    vector<int> prefix(n),suffix(n);

    int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0; i<vec.size(); ++i){

                mini=min(mini,vec[i]);
                prefix[i]=mini;

                maxi=max(maxi,vec[n-i-1]);
                suffix[n-i-1]=maxi;

        }

        string s="";
        for(int i=0; i<vec.size(); ++i){

            if(max(prefix[i],suffix[i])==vec[i] || min(prefix[i],suffix[i])==vec[i])
            s+='1';
            else s+='0';

        }
        cout<<s<<'\n';
    }
   
    
    return 0;
}