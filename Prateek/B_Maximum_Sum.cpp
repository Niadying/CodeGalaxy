#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,k; 
    cin>>n>>k;
    vector<ll>nums(n);
    for(ll i = 0; i<n; i++) cin>>nums[i];
    sort(nums.begin(), nums.end());
    ll summin = 0, summax = 0;
    ll sum = accumulate(nums.begin(),nums.end(),0);
    ll cnt = 0;
    ll i = 0;
    ll y = n-1;
    while((i<n-1) && (k--) && (y>=0)){
        summin = nums[i]+nums[i+1];
        summax = nums[y];
        if(summin < summax){
            sum = sum - summin;
            i+=2;
        }
        else{
            sum = sum - summax;
            y--;
        }
        cnt++;
    }
    ll ans = 0;
    for(ll j = i; j<=y; j++){
        ans+=nums[j];
    }
    cout<<ans<<endl;   
    // cout<<sum<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}