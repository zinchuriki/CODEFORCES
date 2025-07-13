#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<int,int> hash;
    int p;
    cin>>p;
    int a;
    for(int i=0; i<p; ++i){
        cin>>a;
        hash[a]++;
    }
    int q;
    cin>>q;
    for(int i=0; i<q; ++i){
        cin>>a;
        hash[a]++;
    }
int i=1;
bool pos=true;
    for(auto it=hash.begin(); it!=hash.end(); ++it){

            if(it->first!=i){
                pos=false;
                break;  
            }
            i++;

    }
    if(i<=n) pos=false;

    if(pos) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

    
    return 0;
}