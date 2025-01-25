#include<bits/stdc++.h>
using namespace std;

int main (){

    // NEED TO COUNT FREQUENCY OF ELEMENTS 
    int arr[9] = {1,1,2,3,4,3,3,3,2};
    // create a new array and store count;
    int hash[5]={0};

    // storing frequency 
    for(int i = 0; i<9; i++){
        hash[arr[i]]++;
    }

    for(int i = 0; i<5; i++){
        cout<<"No. of "<<i<<" is "<<hash[i]<<endl;
    }

    // CAN DO SAME WITH CHARACTER use 256 array to map coorectly




    // HASH MAPS
     int brr[9] = {1,1,2,3,4,3,3,3,2};
     // create a map and store values;
     map<int,int>mpp;
     for(int i = 0; i<9; i++){
        mpp[brr[i]]++;
     }
    // iterate in the map (map stores data in sorted order)

    for(auto it : mpp){
        cout<<it.first<<"--> "<<it.second<<endl;
    }
     int number;
     cin>>number;
     cout<<number<<" is repeated "<<mpp[number]<<" times";
    // we can do same for characters also map<char,int>mpp

    // T.C. of storing and fetching of map in all cases is O(logN).
    // T.C. of storing and fetching of unordered_map is O(1) is best and avg case and O(N) in worst case.

    // use unordered_map and if TLE comes use map.

    // total T.C is O(N) is avg case in onordered and O(N^2) in worst.
    // O(N logN) in map

}