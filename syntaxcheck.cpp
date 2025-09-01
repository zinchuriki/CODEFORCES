#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;


   
 
    string  st(unsigned int a){
        string s="";
        while(a>0){
            s+= a%2+'0';
            a/=2;
        }
       
        
        for(int i=0; i<32-s.size(); ++i) s= '0' +s;
         reverse(s.begin(),s.end());
        
        return s;
    }

unsigned int Solution::reverse(unsigned int A) {
        if(A==0) return 0;
        // string s=st(A);
        bitset<32> binary(n);
        unsigned int b=0;
        int j=0;
        string binary_str = binary.to_string();
        for(int i=31; i>=0; --i){
            b+=(binary_str[i]-'0')*(unsigned int)pow(2,j++);
        }
        
        return b;
        
        
}
  



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {

        int n;
        cin >> n;
        int mod = 998244353;

        int miss = 0, swaps = 0;

        vector<int> vec(n + 1);
        unordered_map<int, int> hash;
        int count = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> vec[i];
            if (vec[i] != i)
            {
                hash[abs(vec[i] - i)]++;
                count++;
            }
        }

        for (auto it = hash.begin(); it != hash.end(); ++it)
        {
            miss += (int)ceil((double)it->second / 2.0);
            swaps += it->second / 2;
        }

        int ans = 0;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {

                ans = (ans + min(count * i, min(miss * j, (count - 2 * swaps) * i + swaps * j))) % mod;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}