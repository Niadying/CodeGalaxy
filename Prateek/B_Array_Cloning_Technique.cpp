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
    ll temp = 0;
    ll j = 1;
    ll got = 0;
    while(left){
        cnt++;
        got = maxi*j;
        j*=2;
        left--;
        got--;
        cnt++;
        if(left&&got){
            left--;
            cnt++;
        }

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