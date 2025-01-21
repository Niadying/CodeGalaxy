#include<iostream>
#include<vector>

using namespace std;

//ITERATIVE
int search( vector<int> &nums, int target){
    int n=nums.size();
    int low=0 , high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target) return mid;
        else if (target>nums[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
//RECURSIVE

int bs(vector<int> &nums,int low,int high,int target){
    if(low > high)return -1;
    int mid = (low +high)/2;
    if (nums[mid]==target) return mid;
    else if(target>nums[mid]) return bs(nums,mid=1,high,target);
    return bs(nums,low,high-1,target);
}
//int search( vector<int> &nums, int target){
//return bs(nums,0,ums.size()-1,target}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(6);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(7);
    nums.push_back(9);
    nums.push_back(11);
    nums.push_back(13);
    nums.push_back(17);

    int target =13;
    int result = search(nums,target);

    if(result!=-1){
        cout<< "target found at index :"<< result<<endl;
    }
    else cout<<"target not found"<<endl;



      
    return 0;

    }
//time complexity = log n base 2