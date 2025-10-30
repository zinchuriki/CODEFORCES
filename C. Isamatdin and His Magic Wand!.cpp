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
        priority_queue<int,vector<int>,greater<int>> od,ev;
        vector<int> vec;
        int a;
        for(int i=0; i<n;++i){
            cin>>a;
            if(a&1)od.push(a);
            else ev.push(a);

            vec.push_back(a);
        } 
            vector<int> ans;
            int i=0;
            if(od.empty() || ev.empty()){
                for(int i=0; i<n; ++i) cout<<vec[i]<<" ";
                cout<<'\n';
                continue;
            }
       while(!od.empty() && ev.empty()){

            int b=INT_MAX,c=INT_MAX;

            if(!od.empty())
                b=od.top();
                if(!ev.empty()) c=ev.top();
            
            if(b<c){
                ans.push_back(b);
                od.pop();
            } else{
                ans.push_back(c);
                ev.pop();
            }
       }

       for(int i=0; i<(int) ans.size(); ++i) cout<<ans[i]<<" ";

       cout<<'\n';
        
        

        
        
    }
    return 0;
}