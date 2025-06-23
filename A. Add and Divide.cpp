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
    int count=0;
    while(a>b){
        count++;
        a/=b;
        if(a<=b)
        break;

        count++;
        b++;
    }
    if(a==b)
    count+=2;
    else count++;

    cout<<count<<'\n';
    }
    
    
    
    return 0;
}