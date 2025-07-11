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

                map<char,int> hash;

                for(int i=0; i<n; ++i) hash[s[i]]++;

                int ans=0;

                for(auto it=hash.begin(); it!=hash.end(); ++it){

                            char a=it->first;

                            if(a==tolower(a)){
                                        int temp=min(it->second,hash[toupper(a)]);
                                ans+=temp;
                                it->second-=temp;
                                hash[toupper(a)]-=temp;
                                int temp2=max(it->second,hash[toupper(a)]);
                                if(k>0){
                                    ans+=min(temp2/2,k);
                                    k-=min(temp2/2,k);

                                }
                            
                            } else{


                                      int temp=min(it->second,hash[tolower(a)]);
                                ans+=temp;
                                it->second-=temp;
                                hash[tolower(a)]-=temp;
                                int temp2=max(it->second,hash[tolower(a)]);
                                if(k>0){
                                    ans+=min(temp2/2,k);
                                    k-=min(temp2/2,k);
                                }
                                
                            }

                            hash[tolower(a)]=0;
                            hash[toupper(a)]=0;

                }

                cout<<ans<<'\n';

                

        }
    
    return 0;
}