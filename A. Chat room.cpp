#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    stack < char > mys;
    bool ans = false, ll = false;

    for (int i = 0; i < s.size(); ++i) {

        if (mys.empty())
        {
            if (s[i] == 'h')
                mys.push('h');
        }
        else {


            if (mys.top() == 'h') {
                if (s[i] == 'e')
                    mys.push('e');
            }
            else {

                if (mys.top() == 'e') {
                    if (s[i] == 'l')
                        mys.push('l');
                }
                else {
                    if (mys.top() == 'l') {
                        if (s[i] == 'l') {
                            mys.push('l');
                            ll = true;
                        }


                        if (s[i] == 'o' && ll)
                            ans = true;

                    }



                }


            }


        }



    }
    if (ans)
        cout << "YES";
    else cout << "NO";

    return 0;
}