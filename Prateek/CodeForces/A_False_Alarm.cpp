#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>nums(n);
    for(int i= 0; i<n; i++) cin>>nums[i];
    ll start  = 0, end = 0;
    bool spot = false;
    for(int i = 0; i<n; i++){
        if(nums[i]==1){
            start = i; break;
        }
    }
    for(int i = n-1; i>=0; i--){
        if(nums[i]==1){
            end = i;
            break;
        }
    }
    if(end-start+1<=x)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}