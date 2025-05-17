#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int maxi=INT_MIN,mini=INT_MAX;
    int n,a,ans=0;
    cin >> n;
    while (n--) {
        cin>>a;
        if(a>maxi|| a<mini)
        ans++;

        maxi=max(maxi,a);
        mini=min(mini,a);
        
        
    }

    cout<<ans-1;
return 0;

}