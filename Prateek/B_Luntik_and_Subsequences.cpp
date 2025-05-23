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

    ll cnt = 0;
    sort(nums.begin(),nums.end());
    ll sum = accumulate(nums.begin(), nums.end(),0);
    for(int i = 0; i<n; i++){
        bool taken = false;
        ll temp = nums[i];
        for(int j = i+1; j<n; j++){
            if(temp==sum-1){
                cnt++;
            }
            temp+=nums[j];
        }
        if(temp==sum-1 && !taken){
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