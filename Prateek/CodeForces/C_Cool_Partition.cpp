#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll>nums(n);
    map<ll,ll>mpp;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        mpp[nums[i]]++;
    }
    ll cnt = mpp[nums[0]];
    bool poss = false;
    ll ans = cnt;
    int segment = 1;
    ll j = 0;
    for(int i = 1; i<n; i++){
        if(mpp[nums[i]]>=)
    }
    cout<<ans<<endl;
    if()
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}