#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

double log_base(double x, double base) {
    return std::log(x) / std::log(base);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    double c=log_base((double)b/(double)a,1.5);

    if(c==ceil(c))
    cout<<c+1;
    else cout<<ceil(c);
    
return 0;

}