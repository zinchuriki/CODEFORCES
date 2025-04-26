#include<iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
       long int n,m,a=0,b=0,sum1=0,sum2=0;
        cin>>n>>m;
        sum1=m;
        sum2=m;
        for(int i=0; i<n; i++){
                cin>>a>>b;
                if(i>0){
                sum1+=a;
                sum2+=b;
                }
        }
        cout<<2*(sum1+sum2)<<'\n';
    }
    return 0;
}