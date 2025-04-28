#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;


bool lucky_d(int n){
    int a=0;
    if(n==0)
    return false;
while(n>0){
    a=n%10;
    n/=10;
        if(a!=7 && a!=4)
        return false;
}
return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unsigned long long  n;
    cin>>n;
    int di=0;
    int a;
    while(n>0){
            a=n%10;
            n/=10;
            if(a==7 || a==4)
            di++;
    }
            if(lucky_d(di))
                cout<<"YES";
                else cout<<"NO";
            
    
return 0;

}