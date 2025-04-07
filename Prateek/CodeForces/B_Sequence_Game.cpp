#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    vector<int>ans;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    for(int i = 1; i<n ;i++){
        if(nums[i-1]>nums[i]){
            ans.push_back(1);
            ans.push_back(nums[i]);
        }
        else ans.push_back(nums[i]);
    }
    cout<<ans.size()+1<<endl;
    cout<<nums[0]<<" ";
    for(auto i:ans){
        cout<<i<<" ";
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