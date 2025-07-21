#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin>>tt;
    while(tt--){

            string s;
            cin>>s;

            int a=0;
            for(int i=0; i<3; +i) a=a+(s[i]-'0');

            for(int i=5; i>=3; --i) a=a-(s[i]-'0');

            if(a==0) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
            

    }
    
    return 0;
}