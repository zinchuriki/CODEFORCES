#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin>>a>>b;
    long int c=a+b;

    string d=to_string(a);
        for(int i=d.size(); i>=0; --i){
            if(d[i]=='0')
            d.erase(i,1);
        }

        string e=to_string(b);

        for(int i=e.size(); i>=0; --i){
            if(e[i]=='0')
            e.erase(i,1);
        }

        string f=to_string(c);

         for(int i=f.size(); i>=0; --i){
            if(f[i]=='0')
            f.erase(i,1);
        }

        int g=stoi(d);
        int h=stoi(e);
        int i=stoi(f);
        if(g+h==i)
        cout<<"YES";
        else cout<<"NO";

    
    return 0;
}