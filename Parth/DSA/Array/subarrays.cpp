//SUBARRAY- contigouos part of an array

// longest subarray with sum k 
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int longestSubarrayWithSumK(vector<int> a , long long k){
    int left=0,right =0;
    long long sum =a[0];
     int maxlen=0;
     int n = a.size();

     while(right < n ){
        while (left<=right && sum >k){
            sum -= a[left];
            left++;
        }
        if(sum == k ){
            maxlen= max(maxlen,right -left +1);
        }
        right ++;
        if (right <n) sum+=a[right];
     }
     return maxlen;
    

}

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(3);
    a.push_back(3);

    long long k=6;

    int result = longestSubarrayWithSumK(a,k);

    cout <<result;
}

//time complexity = O(2n)
//space complexity = O(1)