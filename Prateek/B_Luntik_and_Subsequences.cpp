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

    ll sum = accumulate(nums.begin(), nums.end(),0);
    for(int i = 0; i<n; i++){
        int index = nums[i];
        for(int j = i+1; j<n; j++){
            
        }
    }
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}