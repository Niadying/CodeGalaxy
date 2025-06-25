#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n ;i++){
        cin>>nums[i];
    }
    int cnt1 = 0;
    int interval = 0;
    for(int i = 0; i<n; i++){
        if(nums[i]==0){
            if(cnt1)
            interval++;
            cnt1=0;
        }
        else{
            cnt1++;
        }
    }
    if(cnt1)
        interval++;
    if(interval>2) interval = 2;
    cout<<interval<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}