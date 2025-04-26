// C. Anya and 1100
// time limit per test3 seconds
// memory limit per test256 megabytes
// While rummaging through things in a distant drawer, Anya found a beautiful string s
//  consisting only of zeros and ones.

// Now she wants to make it even more beautiful by performing q
//  operations on it.

// Each operation is described by two integers i
//  (1≤i≤|s|
// ) and v
//  (v∈{0,1}
// ) and means that the i
// -th character of the string is assigned the value v
//  (that is, the assignment si=v
//  is performed).

// But Anya loves the number 1100
// , so after each query, she asks you to tell her whether the substring "1100" is present in her string (i.e. there exist such 1≤i≤|s|−3
//  that sisi+1si+2si+3=1100
// ).

// Input
// The first line contains one integer t
//  (1≤t≤104
// ) — the number of test cases.

// The first line of the test case contains the string s
//  (1≤|s|≤2⋅105
// ), consisting only of the characters "0" and "1". Here |s|
//  denotes the length of the string s
// .

// The next line contains an integer q
//  (1≤q≤2⋅105
// ) — the number of queries.

// The following q
//  lines contain two integers i
//  (1≤i≤|s|
// ) and v
//  (v∈{0,1}
// ), describing the query.

// It is guaranteed that the sum of |s|
//  across all test cases does not exceed 2⋅105
// . It is also guaranteed that the sum of q
//  across all test cases does not exceed 2⋅105
// .

// Output
// For each query, output "YES", if "1100" is present in Anya's string; otherwise, output "NO".

// You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){

    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int query;
        cin>>query;
        for(int i=0; i<query; i++){
            bool flag=false;
            int query_place;
            char query_value;
            cin>>query_place>>query_value;
            s[query_place-1]=query_value;
            if(s.size()>=4){
            for(int j=0;j<=s.size()-4;j++){
                string to_compare_with= s.substr(j,4);
                if("1100"==to_compare_with)
                    flag=true;
            }
            }
            if(flag)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }

    return 0;
}