#include<bits/stdc++.h>  // VEC I/P
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    vector<ll>nums(n);
    for(ll i = 0; i<n; i++) cin>>nums[i];
    ll base = (n+1)/2;
    ll end = base+1, start = 1;
    map<ll,ll>mpp;
    vector<ll>temp = nums;
    cout<<base<<" ";
    sort(temp.rbegin(),temp.rend());
    vector<pair<ll,ll>>rank;
    ll cnt = 1;
    
    for(ll i = 0; i<n; i++){
        if(i%2==0){
            rank.push_back({end++,temp[i]});
        }
        else rank.push_back({start++,temp[i]});
    }

    for()
    cout<<endl;


}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}