#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,s;
    cin>>n>>s;
    vector<int>nums(n);
    for(int i = 0; i<n; i++) cin>>nums[i];
    int start = abs(nums[n-1]-s);
    int end = abs(nums[0]-s);
    ll ans1 = 0,ans2 = 0;
    
    if(n==1){
        cout<<abs(s-nums[0])<<endl; return;
    }
    if(s<=nums[0]){
        cout<<abs(nums[n-1]-s)<<endl; return;
    }
    if(s>=nums[n-1]){
        cout<<abs(s-nums[0])<<endl; return ;
    }

    ans1 = (2*start)+abs(nums[0]-s);
    ans2 = (2*end)+abs(nums[n-1]-s);
    cout<<min(ans1,ans2)<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}