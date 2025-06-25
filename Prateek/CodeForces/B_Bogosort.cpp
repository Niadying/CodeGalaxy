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
    sort(nums.rbegin(),nums.rend());
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(i-nums[i] == j-nums[j]) swap(nums[i],nums[j]);
        }
    }
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}