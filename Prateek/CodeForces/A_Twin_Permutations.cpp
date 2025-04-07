#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n;i++){
        cin>>nums[i];
    }
    int maxi = *max_element(nums.begin(),nums.end());
    int mini = *min_element(nums.begin(),nums.end());
    int ans = maxi+mini;
    for(int i = 0; i<n ;i++){
        cout<<ans-nums[i]<<" ";
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