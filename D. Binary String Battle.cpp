#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin>>tt;
    while(tt--){

        int n,k;
        cin>>n>>k;


   string s;
   cin>>s;
   int left=k/2;
   int right=k-k/2;
   int ones=0;

for(int i=0; i<n; ++i){
        if(s[i]=='1')
        ones++;

}

if(ones<=k){
    cout<<"ALICE"<<'\n';
    continue;
}
  for(int i=0; i<n; ++i){

    if(s[i]=='1'){
        s[i]='0';
        left--;
        
    }
    if(left==0)
    break;


  }


  for(int i=n-1; i>=0; --i){

    if(s[i]=='1'){
        s[i]='0';
        right--;
        
    }
    if(right==0)
    break;
  }

  int count=0;
    int maxi=INT_MIN;
  for(int i=0; i<n; ++i){

    if(s[i]=='0')
    count++;
    else count=0;
    maxi=max(maxi,count);

  }

  if(maxi>=k)
  cout<<"BOB"<<'\n';
  else cout<<"ALICE"<<'\n';



    }
    
    return 0;
}