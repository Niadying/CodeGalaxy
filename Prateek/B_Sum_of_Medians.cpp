#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<int>nums(n*k);
    for(int i = 0; i<n*k; i++){
        cin>>nums[i];
    }
    ll sum = 0;
    ll median = (n-1)/2;
    if(n==1){
        cout<<accumulate(nums.begin(),nums.end(),0)<<endl; return;
    }
    if(n==2){
        for(ll i = 0; i<n*k; i+=2){
            sum+=nums[i];
        }
        cout<<sum<<endl; return;
    }

    ll temp = k;
    ll skip = (n/2)+1;
    for(ll i = k; i<n*k; i+=skip){
        sum+=nums[i];
    }
    cout<<sum<<endl;

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}