#include<iostream>
#include<vector>

using namespace std;

//ITERATIVE
// int search( vector<int> &nums, int target){
//     int n=nums.size();
//     int low=0 , high = n-1;

//     while(low<=high){
//         int mid = (low+high)/2;
//         if(nums[mid]==target) return mid;
//         else if (target>nums[mid]) low=mid+1;
//         else high=mid-1;
//     }
//     return -1;
// }
//RECURSIVE

// int bs(vector<int> &nums,int low,int high,int target){
//     if(low > high)return -1;
//     int mid = (low +high)/2;
//     if (nums[mid]==target) return mid;
//     else if(target>nums[mid]) return bs(nums,mid=1,high,target);
//     return bs(nums,low,high-1,target);
// }
//int search( vector<int> &nums, int target){
//return bs(nums,0,ums.size()-1,target}


//BINARY SEARCH !!!

// int lowerbound(vector<int>&arr , int n,int x){
//     int low = 0;int high = n-1;
//     int ans =n;
//     while(low<=high){
//         int mid = (low +high)/2;
//         if (arr[mid]>=x){
//             ans = mid;
//             high=mid-1;

//         }
//         else {low = mid +1;}

//     }
//     return ans;
// }



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
    int x=9;

//     int x =9;
//     int result = lowerbound (arr,n,x);

//     if(result!=-1){
//         cout<< "target found at index :"<< result<<endl;
//     }
//     else cout<<"target not found"<<endl;

   int lb = lower_bound(arr.begin(),arr.end(),x)-arr.begin();

      cout<<lb<<endl;
    return 0;

    }
// //time complexity = log n base 2




//LEETCODE 

int findMax(const vector<int> &v) {
    int maxi = INT_MIN;
    for (int num : v) {
        maxi = max(maxi, num);
    }
    return maxi;
}
int findmin(const vector<int> &v) {
    int mini = INT_MAX;
    for (int num : v) {
        mini =min(mini, num);
    }
    return mini;
}

bool possible(vector<int> &bloomDay, int day,int m,int k){
    int cnt=0;
    int no_of_b=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay [i]<=day) cnt++;
        else{
            no_of_b += cnt/k;
            cnt=0;
        }

    }
     no_of_b += cnt/k;
     return no_of_b >=m;
     }
    


    int minDays(vector<int>& bloomDay, int m, int k) {
        int n =bloomDay.size();
        int low = findmin(bloomDay);
        int high = findMax(bloomDay);
        int cnt =0;
     

    
        
        while (low <=high){
            int mid=(low +high)/2;
            if (n < static_cast<long long>(m) * k) return -1;
          
            
            if(possible(bloomDay , mid , m , k)){
                high =mid-1;
            }

        else {
            low =mid+1;
        }
            
        }
        return low;
    }



    //LEETCODE


    int findMax(const vector<int> &v) {
    int maxi = INT_MIN;
    for (int num : v) {
        maxi = max(maxi, num);
    }
    return maxi;

}

int findsum(const vector<int> &v){
    int sum =0;
    for (int i=0;i<v.size();i++){
        sum += v[i];
    }
    return sum;
}

int mincapacity(vector<int>& weights, int days, int cap){
    int day = 1; 
    int load = 0;
    int n = weights.size();
    for (int i = 0; i < n; i++) {
        if (load + weights[i] > cap) {
            day += 1; 
            load = weights[i]; 
        }
        else {
            
            load += weights[i];
        }
    }
    return day;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n =weights.size();
        int low = findMax(weights);
        int high = findsum(weights);

        while(low <=high){
            int mid = (low +high)/2;
        
          
             if (mincapacity(weights,days,mid)<=days){
                high =mid-1;
            }
            else{
                low =mid+1;
            }


        }
        return low;

    }