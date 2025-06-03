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
    vector<int>temp;
    int ans = 0;
    for(int i = 0; i<n-1; i++){
        nums[i+1]=nums[i]&nums[i+1];
    }
    cout<<nums[n-1]<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}