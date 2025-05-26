#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    string a = s;
    bool all = true, first = true;

    for (int i = 0; i < s.size(); ++i) {
        if (toupper(s[i]) != s[i]) {
            all = false;
            if (i >= 1)
                first = false;
        }




    }

    if(all ){
        for (int i = 0; i < s.size(); ++i) {
            s[i] = tolower(s[i]);
        }
    }
    if ( first && !all) {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); ++i) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;

    return 0;
}