#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>nums,int key){
    // TC -> O(log(N))
    int start = 0, end = nums.size() - 1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(nums[mid]==key){
            return mid;
        }
        else if (nums[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    } 
    return -1;
}


int linearSearch(vector<int>nums, int key){
    // TC -> O(N)
    int index = 0;
    for(auto i:nums){
        if(i==key) return index;
        index++;
    }
    return -1;
}

int main(){
    vector<int>nums = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int index = BinarySearch(nums,9);
    cout<<linearSearch(nums,9)<<endl;
    cout<<index<<endl;
}