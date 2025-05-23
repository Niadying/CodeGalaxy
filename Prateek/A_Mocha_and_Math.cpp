#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int ans = *max_element(nums.begin(),nums.end()) & *min_element(nums.begin(),nums.end());
    cout<<ans<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}