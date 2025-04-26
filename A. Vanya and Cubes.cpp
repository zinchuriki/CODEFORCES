#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
        int sum=0;
        int count=0;
        for(int i=1; i<30; ++i){
            sum+=i;
            n-=sum;
            if(n>=0)
            count++;
            else break;
        }
        cout<<count;
    return 0;
}