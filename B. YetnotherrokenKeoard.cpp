#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {

        string s;
        cin >> s;
        vector < int > big, small;
        string ans="";
        int j=0;
        for (int i = 0; i < s.size(); ++i) {

            if (s[i] == 'B' || s[i] == 'b') {
                if (s[i] == 'B') {
                    if (big.size() == 0)
                        continue;
                    else
                    {
                        ans[big[big.size() - 1]]='0';
                        big.pop_back();
                     
                    }


                }

                else {
                    if (small.size() == 0)
                        continue;
                    else
                    {
                        ans[small[small.size() - 1]]='0';
                        small.pop_back();
                    
                    }
                }


            }
            else {
                if (s[i] <= 'Z' && s[i] >= 'A')
                    big.push_back(j);
                else small.push_back(j);
                    j++;
                ans += s[i];

            }

        }
        
          ans.erase(
        std::remove(ans.begin(), ans.end(), '0'), 
        ans.end()
    );
  cout << ans << '\n';


    }

    return 0;
}