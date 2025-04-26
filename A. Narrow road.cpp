// Column ofn
// scooters travel along a narrow one-way road to point B. The scooters are numbered from1
// ton
// . For every scooteri
// it is known that the current distance from it to point B is equal toai
// meters. At the same timea1<a2< … <an
// , in particular, a scooter1
// is closest to point B, and the scootern
//  — the farthest.

// Scooter with numberi
// moves towards point B at speedi
// meters per second (i.e. the closer the scooter in the column to point B, the slower it goes). Since the road is narrow, scooters cannot overtake each other. Moreover, neighboring scooters in the column must keep a distance of at least1
// meter. Therefore, when a faster scooter catches up with a slower one, the faster one has to continue to ride at the speed of the slower one, and at a distance of1
// a meter from him.

// Determine how far from point B each scooter will be in exactly one second.

// Input data
// The first line contains one integer.n
// (1 ≤ n ≤ 100
// ) — the number of scooters in the column.

// INi
// -th of the followingn
// one integer number of lines is givenai
// (1 ≤ai≤ 1000
// ;a1<a2< … <an
// ) — current distance from the scooteri
// to point B in meters.

// Output data
// Take it outn
// integers - distances from scooters1 , 2 , … , n
// to point B in meters in one second.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> input(n);
    vector<int> output(n);

    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    output[0]=input[0]-1;
    cout<<output[0]<<endl;
    for(int i=1; i<n; i++){
        if(input[i]-(i+1)<=output[i-1])
        output[i]=output[i-1]+1;
        else
        output[i]=input[i]-(i+1);
        cout<<output[i]<<endl;
    }



    return 0;
}