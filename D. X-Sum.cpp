#include <bits/stdc++.h>
using namespace std;


 long long int traverse_left(int i, int j, vector<vector<int>>& mat){

    if(i<0 || i>=mat.size() || j<0 || j>=mat[0].size()  || mat[i][j]==-1)
    return 0;


     int b=mat[i][j];
        mat[i][j]=-1;
     int a=traverse_left(i+1,j+1,mat);
    a+=traverse_left(i-1,j-1,mat);

    mat[i][j]=b;

    return b+a;

 }


 
 long long int traverse_right(int i, int j, vector<vector<int>>& mat){

   if(i<0 || i>=mat.size() || j<0 || j>=mat[0].size()  || mat[i][j]==-1)
    return 0;


     int b=mat[i][j];
        mat[i][j]=-1;

    int a=traverse_right(i+1,j-1,mat);
    a+=traverse_right(i-1,j+1,mat);

   mat[i][j]=b;

    return b+a;

 }



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int tt;
    cin>>tt;
    while(tt--){
int n,m;
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int>(m));
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin>>mat[i][j];
        }
    }

    long long int maxi=0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
           maxi=max(maxi,traverse_left(i,j,mat)+ traverse_right(i,j,mat)-mat[i][j]);
        }
    }
    cout<<maxi<<'\n';
    }
    
    
    return 0;
}