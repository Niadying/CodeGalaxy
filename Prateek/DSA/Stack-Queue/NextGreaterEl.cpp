#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> NGE(vector<int>nums){
    stack<int>st;
    ll n = nums.size();
    vector<int>ans(n);
    for(ll i = n-1; i>=0; i--){
        while(!st.empty()&&st.top()<=nums[i]){
            st.pop();
        }
        if(st.empty()) ans[i]=-1;
        else ans[i]=st.top();
        st.push(nums[i]);
    }
    for(auto i:ans) cout<<i<<" ";
    return ans;
}
int main (){
    vector<int>nums={4,12,5,3,1,2,5,3,1,2,4,6};
    vector<int>temp = NGE(nums);
}