// Boris Notkin composes melodies. He represents them as a sequence of notes, where each note is encoded as an integer from 0
//  to 127
//  inclusive. The interval between two notes a
//  and b
//  is equal to |a−b|
//  semitones.

// Boris considers a melody perfect if the interval between any two adjacent notes is either 5
//  semitones or 7
//  semitones.

// After composing his latest melodies, he enthusiastically shows you his collection of works. Help Boris Notkin understand whether his melodies are perfect.

// Input
// The first line contains an integer t
//  (1≤t≤1000
// ) — the number of melodies.

// Each melody is described by two lines.

// The first line contains an integer n
//  (2≤n≤50
// ) — the number of notes in the melody.

// The second line contains n
//  integers a1,a2,…,an
//  (0≤ai≤127
// ) — the notes of the melody.

// Output
// For each melody, output "YES", if it is perfect; otherwise, output "NO".

// You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> input(n);

        for(int i=0; i<n; i++){
            cin>>input[i];
        }
        bool flag =true;
        for (int i = 0; i < n-1; i++)
        { 
            int a=abs(input[i+1]-input[i]);
            if (a!=5 && a!=7)
            {
                cout<<"NO"<<endl;
                flag=false;
                break;
            } 

        }
        if(flag)
        cout<<"YES"<<endl;
        
    }
}