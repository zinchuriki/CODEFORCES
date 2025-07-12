#include <bits/stdc++.h>
using namespace std;


void bfs(vector<vector<int>>& mapping,vector<vector<int>>& roads,vector<int>& parent,int source,int destination,vector<int>& distance){
  
    
    std::queue<int> q;
  
  q.push(source);
  
  int count=1;
  
while(!q.empty()){
   int now=q.front();
      for(int j=0; j<mapping[now].size(); ++j){
            if(distance[mapping[now][j]]==-1){
              distance[mapping[now][j]]=count;
              q.push(mapping[now][j]);
              parent[mapping[now][j]]=now;
            }    
      }
      count++;
  
}
}

int main() {



int n,m;
cin>>n>>m;

vector<vector<int>> mapping(n+1),roads(m+1);

string city1,city2,road,source,destination;

map<string,int> hash;
map<int,string> hash1;
int j=1,k=1;
for(int i=0; i<m; ++i){
  
    cin>>city1>>city2>>road;
      
      if(hash[city1]==0){
         hash[city1]=j;
      hash1[j++]=city1;
      }
     
      
      
      if(hash[city2]==0){
         hash[city2]=j;
      hash1[j++]=city2;
      }
     
      
      
      if(hash[road]==0){
         hash[road]=k;
      hash1[k++]=road;
      }
     
    
          mapping[hash[city1]].push_back(hash[city2]);
          roads[hash[city1]].push_back(hash[road]);
  
}

 cin>>source>>destination;
 
 int source1=hash[source],destination1=hash[destination];
 
 vector<int> distance(n+1,-1);
 vector<int> parent(n+1);
 
 
 parent[source1]=-1;
 vector<int> seq;
 int a=parent[destination1];
  bfs( mapping, roads,parent,source1, destination1,distance);
 while(a!=-1){
      seq.push_back(a);
      a=parent[a];
   
 }
 
 for(int i=seq.size()-1; i>0; --i){
   cout<<roads[seq[i]][seq[i-1]];
 }
  return 0;

}