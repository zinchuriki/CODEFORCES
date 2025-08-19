#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    double power(double b, int e) {
        // code here
        
        if(b==0 || e==1)
        return b;
        
        if(e==0){
            if(b<0) return -1;
             return 0;
        }
        double ans=b;
        bool is=false;
        if(e<0) is=true;
        e=abs(e);
        while(e>0){
                    
            if(e&1) ans*=b;
            else ans*=ans;
            
            e/=2;
            
        }
        
        if(is) return 1.0/ans;
        
        return ans;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);
    int l = 0, r = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];
        if (vec[i] <= 0)
            l = i;
    }

    r = l + 1;

    while (l >= 0 && r < n)
    {

        if (abs(vec[l]) < abs(vec[r]))
        {
            cout << vec[r] * vec[r] << " ";
            r++;
        }

        else
        {
            cout << vec[l] * vec[l] << " ";
            l--;
        }
    }

    while (l >= 0)
        cout << vec[l] * vec[l] << " ";
    while (r < n)
        cout << vec[r] * vec[r] << " ";

    return 0;
}