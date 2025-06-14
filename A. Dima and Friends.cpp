#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sum=0;
    int a;
    for(int i=0; i<n; ++i){
        cin>>a;
            sum+=a;

    }
    int ans=0;

    for(int i=1; i<=5; ++i){
if((sum+i)%(n+1)!=1)
ans++;
    }
    cout<<ans;
    
    
    return 0;
}