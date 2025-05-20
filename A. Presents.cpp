#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<int,int> hash;
int a;
    for(int i=0; i<n; ++i){
        cin>>a;
        hash[a]=i+1;
    }

    for(auto it=hash.begin(); it!=hash.end();++it){
        cout<<it->second<<" ";
    }
    
    return 0;
}