#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int cnt0=0, cnt1=0, cnt2=0,cnt3=0,cnt5=0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    for(int i = 0; i<n; i++){
        if(nums[i]==0) cnt0++;
        if(nums[i]==1) cnt1++;
        if(nums[i]==2) cnt2++;
        if(nums[i]==3) cnt3++;
        if(nums[i]==5) cnt5++;

        if((cnt0>=3)&&(cnt1>=1)&&(cnt2>=2)&&(cnt3>=1)&&(cnt5>=1)) {cout<<i+1<<endl;return;}
    }
    cout<<0<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}