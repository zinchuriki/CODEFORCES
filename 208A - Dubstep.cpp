#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Replace all "WUB" with a space
    // regex_replace is great but might be overkill. 
    // Let's do it manually:
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2;
            cout << " ";
        } else {
            cout << s[i];
        }
    }
    return 0;
}