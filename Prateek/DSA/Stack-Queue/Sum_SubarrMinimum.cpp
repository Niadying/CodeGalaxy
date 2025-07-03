#include<bits/stdc++.h>
using namespace std;
using ll = long long;

 vector<int> findNSE(vector<int>&arr){
    vector<int>nse(arr.size());
    stack<int>st;
    for(int i = arr.size()-1; i>=0; i--){
        while(!st.empty()&&arr[st.top()]>=arr[i]) {st.pop();}
        nse[i]=st.empty()? arr.size():st.top();
        st.push(i);
    }
    return nse;
}

vector<int>findPSEE(vector<int>&arr){
    vector<int>psee(arr.size());
    stack<int>st;
    for(int i = 0; i<arr.size(); i++){
        while(!st.empty()&&arr[st.top()]>arr[i]) {st.pop();}
        psee[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return psee;
}


int sumSubarrayMins(vector<int>& arr) {
    
    // OPTIMAL
    int ans = 0;
    int mod = (int)(1e9 + 7);
    vector<int>nse = findNSE(arr);
    vector<int>psee = findPSEE(arr);
    for(int i = 0; i<arr.size(); i++){
        int left = i-psee[i];
        int right = nse[i]-i;
        ans = (ans+(1LL*left*right*arr[i])%mod)%mod;
    }
    return ans;




    // BRUTE FORCE
    
    // long long sum = 0;
    // for(int i = 0; i<arr.size(); i++){
    //     int mini = INT_MAX;
    //     for(int j = i; j<arr.size(); j++){
    //         mini = min(mini,arr[j]);
    //         sum+=mini;
    //         sum%=1000000007;
    //     }
    // }
    
    // return sum;
}
int main (){
    
}