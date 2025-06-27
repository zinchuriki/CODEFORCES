#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin>>tt;
    while(tt--){
       long long int a,b,c;
        cin>>a>>b>>c;

        if(a<c)
        cout<<1<<' ';
        else cout<<-1<<' ';

        if(c<a*b){
            cout<<b;
        }
        else{
                    if(c==a*b)
                    cout<<-1;
                    else {if(c>a)
                    cout<<-1;
                    else 
                        cout<<b;
                        }





        }
        cout<<'\n';
    }
    
    return 0;
}