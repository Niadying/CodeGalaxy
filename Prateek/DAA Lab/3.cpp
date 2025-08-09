#include<bits/stdc++.h>
using namespace std;

int cntPairs (vector<int>nums,int key){

    // OPTIMAL TC O(N LOG(N))
    // WE SORT THE ARRAY AND THEN WE ITERATE THE ARRAY AND USING BINARY SEARCH WE FIND THE REQUIRED NUMBER IF IT EXISTS WE INCREASE CNT
    sort(nums.begin(),nums.end());
    int cnt = 0;
    for(int i = 0; i<nums.size(); i++){
        int index = nums[i];
        int req = key-nums[i];
        int start = i+1, end = nums.size()-1;
        while(start<=end){
            int mid = (end+start)/2;
            if(nums[mid]==req){
                cnt++;break;
            }
            else if (nums[mid]>req) end = mid-1;
            else start = mid+1;
        }
    }
    return cnt;
}

int bruteForce(vector<int>nums,int key){
    // BRUTE TC-> O(N)
    // FOR EACH ELEMENT WE TRY TO MAKE PAIR BY ITERATING THE ARRAY AGAIN.

    int cnt = 0;
    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size();j++){
            if(nums[i]+nums[j]==key)cnt++;
        }
    }
    return cnt;
}

int main (){

    vector<int>nums={9,8,7,6,5,4,3,2,1};
    int key = 10;
    cout<<cntPairs(nums,key)<<endl;
    
}