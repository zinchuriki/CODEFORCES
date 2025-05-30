#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    int a;
    map<int,int> hash;
        int maxi=1;
    for(int i=0; i<n; ++i){
        cin>>a;
        hash[a]++;
        maxi=max(maxi,hash[a]);
    }

    int count=0;

    
    cout<<maxi<<" "<<hash.size();
    return 0;
}