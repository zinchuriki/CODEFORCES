#include <bits/stdc++.h>
using namespace std;

void print( string s,vector<pair<string,string>> vec){
    pair<string,string> p;
    for(int i=0;i<vec.size(); ++i){
        p=vec[i];
        int a=p.first.size(),b=p.second.size();
        if(p.first==s || p.second==s)
        {

            if(a!=b){
                      if(a<b)
                      cout<<p.first<<" ";
                      else cout<<p.second<<" ";
            }
            else cout<<p.first<<" ";
          
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    string s,a;
    pair<string,string> p1;
    vector<pair<string,string>> vec;


for(int i=0; i<m; ++i){
    cin>>s>>a;

    int b=min(s.size(),a.size());
   p1.first=s;
   p1.second=a;
   vec.push_back(p1);
}

for(int i=0; i<n; ++i){
    cin>>s;
    print(s,vec);
}



   
    
    return 0;
}