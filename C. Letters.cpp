#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> dorm(n),letters(m);
        int a;
        long int sum=0;
    for(int i=0; i<n; ++i){
            cin>>a;
            sum+=a;
            dorm[i]=sum;
    }
        int b;
    for(int i=0; i<m; ++i){
        cin>>b;
        auto it=lower_bound(dorm.begin(),dorm.end(),b);
       int dist= distance(it,dorm.begin());
       int num=*it;
       if(dist!=1){
                num=*it-*(it-1);
       }
        cout<<dist<<" "<<num<<'\n';

    }
    
   
    
    return 0;
}