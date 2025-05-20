#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        nums[i]++;
    }

    for(int i = 0; i<n-1; i++){
        // nums[i]++;
        if(nums[i+1]%nums[i]==0){
            nums[i+1]++;
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