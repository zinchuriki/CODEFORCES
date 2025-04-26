#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        string s,p;
        getline(cin,p);
        cin.ignore();
        getline(cin,s);
        bool flag=false;

        for(auto i=0; i<p.size(); i++){
            if(p[i]=='L'){
                if(s[i]=='R' && s[i+1]=='R'){
                    flag=true;
                        break;
                }
            }
            else{
                if(s[i]=='L' && s[i+1]=='L'){
                    flag=true;
                            break;
                }
            }
        }

        if(flag)
        cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
        
        
    }
return 0;

}
