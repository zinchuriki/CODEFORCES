#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<string,int> hash;
string a;
int maxi=INT_MIN;
    for(int i=0; i<n; ++i){
        cin>>a;
        hash[a]++;
        maxi=max(maxi,hash[a]);
    }

    for(auto it=hash.begin(); it!=hash.end(); ++it){
        if(it->second==maxi)
        cout<<it->first;
    }
    
    
    return 0;
}