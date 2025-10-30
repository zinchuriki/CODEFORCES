#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        
        // Your code for each test case here
        int n;
        cin>>n;
        vector<pair<int,int>> vec;
        for(int i=0; i<n; ++i){
            int s;
            cin>>s;
            int mini=INT_MAX;
            int s_mini=INT_MAX;
            int temp;
            for(int i=0; i<s; ++i){
                    cin>>temp;
                    if(temp<=mini){
                       
                        s_mini=temp;
                         mini=temp;
                    } else{
                        s_mini=min(s_mini,temp);
                    }
            }
            vec.push_back({mini,s_mini});
        }
        
    }
    return 0;
}