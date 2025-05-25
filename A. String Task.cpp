#include <bits/stdc++.h>
using namespace std;



bool vowel( char a){
    a=tolower(a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'|| a=='y')
    return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//   deletes all the vowels,
// inserts a character "." before each consonant,
// replaces all uppercase consonants with corresponding lowercase ones.

string s;
cin>>s;
int n=s.size();
string ans="";
for(int i=0; i<n; ++i){
    if(!vowel(s[i])){
        ans+='.';
        ans+=tolower(s[i]);
    }
}
cout<<ans;
    
    return 0;
}