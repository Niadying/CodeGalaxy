#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int singleEl(vector<int>nums){
    // OPTIMAL APPROACH

    int ones = 0, twos = 0;
    for(int i = 0; i<nums.size(); i++){
        ones = (ones^nums[i])&(~twos);
        twos = (twos^nums[i])&(~ones);
    }
    return ones;


    // ANOTHER APPROACH (SLIGHT MORE BETTER BUT WE ARE DISTORTING DATA)

    // sort(nums.begin(),nums.end());
    // for(int i = 1; i<nums.size(); i+=3){
    //     if(nums[i]!=nums[i-1]) return nums[i-1];
    // }
    // return nums[nums.size()-1];

    // BETTER TC(O(32*N))

    // int ans = 0;
    // for(int bitIndex = 0 ;bitIndex<=31; bitIndex++){
    //     int cnt = 0;
    //     for(int j = 0; j<nums.size(); j++){
    //         if((1<<bitIndex)&nums[j]) cnt++;
    //     }
    //     if(cnt%3==1){
    //         ans = ans|(1<<bitIndex);
    //     }
    // }
    // return ans;
}

int main (){
    vector<int>nums={1,1,1,2,2,2,3,4,3,3};
    cout<<"Single Element: "<<singleEl(nums);
}