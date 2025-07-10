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
        int n=s.size();
        int count=0;
        if(s[0]==')' || s[n-1]=='('){
            cout<<"NO"<<'\n';
            continue;
        }

        for(int i=0; i<n; ++i){
            if(s[i]=='?')
            count++;
        }

        if(count%2!=0){
cout<<"NO"<<'\n';
continue;
        }
        cout<<"YES"<<'\n'; 
        

        
        }


          return 0;

 }
    
 
