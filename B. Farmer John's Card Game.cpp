#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main(){

    int tt;
     cin>>tt;
      while(tt--){
        int n, m,a;
        vector<vector<int>> vec(n,vector<int>(m));
        map<int,int> mymap;
        bool flag=false;
        vector<int> hash(n);

        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                    cin>>vec[i][j];
        if(vec[i][j]<n  && vec[i][j]>=0)
hash[vec[i][j]]=i
            }
        }


        for(int i=0; i<n; i++){
            sort(vec[i].begin(),vec[i].end());
        }

        sort(vec.begin(),vec.end());

        for(int i=1; i<m; i++){
            for(int j=0; j<n-1;j++){
                if(vec[j][i]>vec[j+1][i]){
                    flag=true;
                    break;}
            }
        }

        if(flag)
        cout<<-1<<'\n';
        else {
            for(auto i=0; i!=mymap.size(); i++)
        }

        





      }
    return 0;
}