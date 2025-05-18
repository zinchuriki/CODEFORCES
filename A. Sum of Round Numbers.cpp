#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin>>n;
        int a=n;
        vector<int> vec;
         
         int count=0;

        while(a>0){
            vec.insert(vec.begin(),a%10);
                if(a%10!=0)
                count++;
            a/=10;
        }
        cout<<count<<'\n';
        for(int i=0; i<vec.size(); ++i){
            if(vec[i]!=0)
            cout<<vec[i]*(int)pow(10,vec.size()-i-1)<<" ";
        }
        cout<<'\n';



        
        
    }
return 0;

}