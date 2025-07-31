#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    vector<int> vec;
    int i=1;
    while(vec.size()<1000){
        if(i%3!=0 && i%10!=3) vec.push_back(i);
        i++;
    }
    while (tt--) {
        
       int k;
       cin>>k;
       cout<<vec[k-1]<<'\n';

        
        
    }
    return 0;
}