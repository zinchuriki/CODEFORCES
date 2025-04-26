// A. Trippi Troppi
// time limit per test1 second
// memory limit per test256 megabytes
// Trippi Troppi resides in a strange world. The ancient name of each country consists of three strings. The first letter of each string is concatenated to form the country's modern name.

// Given the country's ancient name, please output the modern name.

// Input
// The first line contains an integer t
//  – the number of independent test cases (1≤t≤100
// ).

// The following t
//  lines each contain three space-separated strings. Each string has a length of no more than 10
// , and contains only lowercase Latin characters.

// Output
// For each test case, output the string formed by concatenating the first letter of each word.


#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        string s,answer="";
        getline(cin,s);
        int i=0;
        answer+=s[0];
        while(i<s.size()){
                    
                if(s[i]=' ')
                answer+=s[i+1];

            i++;
        }
        cout<<answer<<'\n';
        

        
        
    }
return 0;

}