#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
     int n = nums.size();
     int sum =0;
     int max= INT_MIN;
     for (int i=0;i<n;i++){
        sum +=nums[i];

        if(sum>max){
            max=sum;
        }

        if (sum<0){
            sum =0;
        }

     }
    return max;
        
    }

    int main(){
        
    }
