#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin>>tt;
    while(tt--){

        int a,b;
        cin>>a>>b;
        cout<<(int)ceil((double)abs(a-b)/10)<<'\n';

    }
    
    return 0;
}