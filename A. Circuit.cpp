#include<iostream>
#include<vector>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int light;
        cin>>light;
        int on=0,off=0;
        vector<int> switches(2*light);
        for(int i=0; i<2*light; i++){
            cin>>switches[i];
            if(switches[i]==1)
            on++;
            else off++;
        }
        cout<<on%2<<" ";
        int a=min(on,light);
        if(on==light*2)
        cout<<0<<endl;
        else cout<<a<<endl;
    }
}