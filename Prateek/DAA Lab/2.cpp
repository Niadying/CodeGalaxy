#include<bits/stdc++.h>
using namespace std;

bool optimal(vector<int>nums){
    // OPTIMAL O(N)

    // WE CREATE A HASH MAP WHO STORES IT'S FREQUENCY, AND IF FREQUENCY IS 2 HENCE IT CONTAINS DUPLICATE ELEMENTS.

    map<int,int>mpp;
    for(auto i:nums)mpp[i]++;
    for(auto i:mpp){
        if(i.second==2)return true;
    }
    return false;
}

bool better(vector<int>nums){
     // BETTER O(N LOG(N))

    // WE SORT THE ARRAY AND THEN WE CHECK DOES IT NEXT ELEMENT IS EQUAL TO THE CURRENT ELEMENT

    sort(nums.begin(),nums.end());
    for(int i = 0; i<nums.size()-1; i++){
        if(nums[i]==nums[i+1])return true;
    }
    return false;
}


bool brute(vector<int>nums){
    // BRUTE FORCE O(N^2)

    // WE CHECK FOR EACH ELEMENT IN THE ARRAY DOES IT REPEATS ITSELF

    for(int i = 0; i<nums.size(); i++){
        int cnt = 0;
        for(int j = 0;j<nums.size(); j++){
            if(nums[i]==nums[j])cnt++;
        }
        if(cnt==2){
            return true;
        }
        cnt = 0;
    }
    return false;
}

int main (){
    vector<int>nums={1,2,3,4,5,6,7,6,5,4,3,2,0,0};
    cout<<brute(nums)<<endl;
    cout<<better(nums)<<endl;
    cout<<optimal(nums)<<endl;

}