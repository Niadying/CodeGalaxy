#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    map<int,vector<int>>mpp;
    for(int i = 0; i<n; i++) cin>>nums[i];
    // sort(nums.rbegin(),nums.rend());
    for(int i = 0; i<n; i++){
        mpp[(nums[i]%k)].push_back(i);
    }
    for(auto i:mpp){
        // cout<<"KEY : "<<i.first<<" -> ";
        for(auto j:i.second){
            cout<<++j<<" ";
        }
        // cout<<endl;
    }
    cout<<endl;
    
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}