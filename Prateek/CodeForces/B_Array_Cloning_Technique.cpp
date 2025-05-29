#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    vector<ll>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    ll cnt = 0;
    map<int,int>freq;
    for(int i = 0; i<n; i++){
        freq[nums[i]]++;
    }
    int maxi = 0;
    for(auto i:freq){
        maxi = max(i.second,maxi); 
    }
    if(maxi==n){
        cout<<0<<endl; return;
    }
    ll left = n-maxi;
    while(left){
        cnt++;
        ll got = maxi;
        while(got && left){
            left--;
            cnt++;
            got--;
        }
        maxi = n-left;
    }
    cout<<cnt<<endl;

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}