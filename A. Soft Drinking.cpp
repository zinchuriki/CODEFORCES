#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink=((l*k)/nl)/n;

    int sl=(c*d)/n;

    int sa=(p/np)/n;

    cout<<min(drink,min(sl,sa));

    
    
    return 0;
}