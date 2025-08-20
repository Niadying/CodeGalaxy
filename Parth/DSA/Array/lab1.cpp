#include<iostream>
#include<vector>
#include <chrono>
using namespace std::chrono;

using namespace std;

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

int ls(vector<int> &nums,int target){
    for(int i =0;i<nums.size();i++){
        if(nums[i]==target) return i;
    }
    return -1;
}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(11);
    int n = arr.size();


     int ind= search(arr,10);


      cout<< ind<<endl;
    auto start = high_resolution_clock::now();


    for (int i = 0; i < 1000000; i++) {
        int x = i * i;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Execution time: " << duration.count() << " ms" << endl;

    return 0;

    }