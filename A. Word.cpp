#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    string a=s;
    int count=0;
std::transform(s.begin(), s.end(), s.begin(), ::tolower);

for(auto i=0; i<s.size(); i++){
    if(abs(s[i]-a[i]))
    count++;

}
if(count>floor((double)s.size()/2))
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s;




return 0;

}