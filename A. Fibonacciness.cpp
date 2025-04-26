#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int tt;
    cin>>tt;
    while(tt--){
        int a1,a2,a4,a5,count1=1,count2=1,count3=1,i1,i2,i3;
        cin>>a1>>a2>>a4>>a5;
        i1=a1+a2;
        i2=a4-a2;
        i3=a5-a4;
        if(i1+a2==a4)
        count1++;
        if(i1+a4==a5)
        count1++;
        if(a1+a2==i2)
        count2++;
        if(i2+a4==a5)
        count2++;
        if(a1+a2==i3)
        count3++;
        if(a4-a2==i3)
        count3++;
        cout<<max({count1,count2,count3})<<'\n';

        

       
    }

    return 0;
}
