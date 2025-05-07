#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin>>n;
        int a;
        int answer;

        
            map<int,int> hash1,hash2;

        

        for(int i=1; i<=n; i++){
            cin>>a;
            hash1[a]=i;
            hash2[a]++;
        }

        auto it2=hash2.begin();
        auto it1=hash1.begin();
        if(it2->second>1)
            ++it1;
        
       cout<<it1->second<<'\n';
        
        
    }
return 0;

}