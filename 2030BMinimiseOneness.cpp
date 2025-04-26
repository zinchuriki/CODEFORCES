#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        string s="";
        s+=1+'0';
        int n;
        cin>>n;
        for(int i=0;i<n-1;i++){
            s+=0+'0';
        }
        cout<<s<<'\n';
    }
}
