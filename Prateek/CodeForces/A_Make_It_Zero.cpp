#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    int k = 8;
    int cnt = 0;
    while(k--){
        for(int i = 0; i<n-1; i++){
            if(nums[i]!=nums[i+1])
            nums[i]^=nums[i+1];
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}