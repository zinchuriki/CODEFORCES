#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int shelves,bottles;
        cin>>shelves>>bottles;
        
        vector<int> brand(bottles);
        vector<int> price(bottles);
        vector<int> total_price(bottles+1,0);
        int best_price=0;


            for(int i=0; i<bottles; i++){
                cin>>brand[i];
                cin>>price[i];
            }

                for(int i=0; i<bottles;i++){
                    total_price[brand[i]]+=price[i];
                }
                sort(total_price.begin(), total_price.end(), greater<int>());
                for(int i=0; i<min(shelves,bottles); i++){
                    best_price+=total_price[i];
                }
            cout<<best_price<<endl;

        

    }
}
