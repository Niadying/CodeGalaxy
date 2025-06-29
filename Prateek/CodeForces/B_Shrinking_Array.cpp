#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    vector<ll>nums(n);
    map<ll,ll>mpp;
    for(ll i = 0; i<n; i++) {cin>>nums[i];mpp[nums[i]] = i;}
    bool is = false;
    for(ll i = 0; i<n-1; i++){
        if(abs(nums[i]-nums[i+1])<=1){
            cout<<0<<endl; return;
        }
    }
    if(n==2) {cout<<-1<<endl;return;}
    bool sorting = is_sorted(nums.begin(),nums.end());
    bool issorting = is_sorted(nums.rbegin(),nums.rend());
    if(sorting||issorting)
    cout<<-1<<endl;
    else cout<<1<<endl;


}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}