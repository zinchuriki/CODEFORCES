#include <bits/stdc++.h>
using namespace std;


bool prime_check(int n){

    if(n<=1)
    return false;

    for(int i=2; i<=sqrt(n); ++i){
        if(n%i==0)
        return false;
    }
    return true;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        if(n==1 && k==2){
cout<<"YES"<<'\n';
continue;
        }
        

        if(k>1)
        cout<<"NO"<<'\n';
        else{
            if(prime_check(n))
            cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    
    return 0;
}