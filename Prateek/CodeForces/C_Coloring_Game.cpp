#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    vector<ll>nums(n);
    for(ll i = 0; i<n; i++) cin>>nums[i];
    sort(nums.rbegin(),nums.rend());
    ll maxi = nums[0];
    ll cnt = 0;
    if(n==3){
        if(nums[1]+nums[2]<=nums[0]){
            cout<<0<<endl; return;
        }
        else cout<<1<<endl;
    }
    for(ll i = 1; i<n; i++){
        
    }
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}