#include<iostream>
using namespace std;
int main(){

    int n,k,a,sum=0,hash;
    cin>>n>>k;
    for(int i=0; i<n; ++i){
            cin>>a;
            if(a!=0 && i<k)
            sum++;
            if(i==k-1)
            hash=a;
            if(a==hash && i>=k && a!=0)
            sum++;
    }
cout<<sum;
    return 0;
}