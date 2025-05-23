#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    if(n==1){
        cout<<nums[0]<<endl; return;
    }
    sort(nums.begin(), nums.end());
    int h = n-1;
    int temp = 0;
    int maxi = nums[0];
    for(int i = 0; i<n-1; i++){
        maxi = max(maxi,nums[i+1]-nums[i]);
    }
    // cout<<endl;
    // maxi = max(maxi, nums[n-1]);
    cout<<maxi<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}