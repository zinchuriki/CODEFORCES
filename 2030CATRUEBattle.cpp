#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ones=0,zeroes=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1')
            ones++;
            else zeroes++;
        }
        if(ones>=zeroes)
        cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}