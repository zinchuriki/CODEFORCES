#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;


void toLowercase(std::string &s) {
    for (auto &ch : s) {
        ch = std::tolower(static_cast<unsigned char>(ch));
    }
}


bool big( string& s, string& t){
    int a=0;

    for(auto i=0; i<s.size(); i++){
        if(s[i]==t[i])
        continue;
        if(s[i]>t[i])
        return true;
        else return false;
            
    }
     return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin>>s>>t;
    toLowercase(s);
    toLowercase(t);
    if(s==t)
    cout<<0;
    else{
        if(big(s,t))
        cout<<1;
        else cout<<-1;
    }

  
return 0;

}