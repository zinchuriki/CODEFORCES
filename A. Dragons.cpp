#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> vec;

    pair<int,int> p;
        int a,b;
    for(int i=0; i<n; ++i){
       cin>>a>>b;
       p.first=a;
       p.second=b;
       vec.push_back(p); 
    }

    sort(vec.begin(),vec.end());

    bool ans=true;

    for(int i=0; i<vec.size(); ++i){
        p=vec[i];
        if(s<=p.first){
ans=false;
break;
        }
        s+=p.second;
        
    }

    if(ans)
    cout<<"YES";
    else cout<<"NO";

    
    return 0;
}