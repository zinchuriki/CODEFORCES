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
        string s;
        cin>>s;

        int l=0,r=0;
        int maxi=0;

        for(int i=0; i<s.size(); ++i){
            if(s[i]=='(')
            l++;
            else r++;
            maxi=max(maxi,r-l);
        }

        cout<<maxi<<'\n';


    }
    
    return 0;
}