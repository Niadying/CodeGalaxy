#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ; i<n; i++){
        cin>>nums[i];
    }
    int cnt1 = 0, cnt0 = 0;
    int temp0=0, temp1 = 0;
    
    for(int i = 0; i<n; i++){
        if(nums[i]==0){
            cnt0++;
            temp0 = max(cnt0, temp0);
        }
        else {
            temp0 = max(cnt0, temp0);
            cnt0 = 0;
        }
    }
    temp0 = max(cnt0, temp0);

    for(int i = 0; i<n; i++){
        if(nums[i]==1){
            cnt1++;
        }
        else break;
    }


    if(temp0>=2){
        cout<<"YES"<<endl; return;
    }
    if(cnt1==n){
        cout<<"YES"<<endl; return;
    }
    cout<<"NO"<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}