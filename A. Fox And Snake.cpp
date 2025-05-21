#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    vector<vector<char>> vec(n,vector<char>(m) );
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(i%2==0){
                    vec[i][j]='#';
            }
            else{
                vec[i][j]='.';
                if(i%4==1 && j==m-1)
                        vec[i][j]='#';
                      
                

                if(i%4==3 && j==0)
                    vec[i][j]='#';
                
            }
            cout<<vec[i][j];
        }
        cout<<'\n';
    }
    
    return 0;
}