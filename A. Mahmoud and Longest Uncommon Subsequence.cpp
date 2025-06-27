#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a,b;
    cin>>a>>b;

    if(a!=b) cout<<max(a.size(),b.size());
    else cout<<-1;
    
    return 0;
}