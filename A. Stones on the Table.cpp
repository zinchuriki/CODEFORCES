#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
        int n;
        string s;
        cin>>n;
        cin>>s;
        stack<char> st;
        int answer=0;
        st.push(s[0]);
        for(auto i=1; i<n; i++){
                if(st.top()==s[i])
                answer++;
                else{
                    st.push(s[i]);
                }
                    
        }
        cout<<answer;
        
        
   
return 0;

}