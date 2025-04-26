#include<iostream>
using namespace std;
int main(){

    long long int k,n,w;
    cin>>k>>n>>w;
    long long int sum=0;
    sum=0.5*w*(2*k+(w-1)*k);
if(sum-n>=0)
    cout<<sum-n;
else cout<<0;
    return 0;
}