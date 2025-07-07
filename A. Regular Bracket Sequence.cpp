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

        int l=0,r=0,ques=0;
        bool canwe=true;

        for(int i=0; i<s.size(); ++i){
            if(s[i]==')')
            r++;
            if(s[i]=='()')
            l++;
            if(s[i]=='?')
            ques++;

            if(r>l){
                ques--;
                if(ques<0){
                    cout<<"NO"<<'\n';
                    canwe=false;
                    break;

                }
            }
        }

        if(l>r)
        if(canwe)
        cout<<"YES"<<'\n';

 }
    
    return 0;
}