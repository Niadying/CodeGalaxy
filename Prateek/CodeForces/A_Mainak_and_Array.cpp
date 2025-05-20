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
    int diff = 0, maxi = INT_MIN;
    for(int i = 0;i<n-1; i++){
        diff = nums[i]-nums[i+1];
        maxi = max(maxi,diff);
    }
    maxi = max(maxi,nums.back()-nums.front());
    for(int i = 1; i<n; i++){
        diff = nums[i]-nums[0];
        maxi = max(maxi,diff);
    }
    for(int i = 0; i<n-1; i++){
        diff = nums[n-1]-nums[i];
        maxi = max(maxi,diff);
    }
    cout<<maxi<<endl;

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}