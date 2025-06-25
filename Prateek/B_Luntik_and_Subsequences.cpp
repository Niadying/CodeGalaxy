#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    ll cnt0 = 0;
    ll cnt1 = 0;
    ll sum = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        sum+=nums[i];
        if(nums[i]==0) cnt0++;
        else if (nums[i]==1) cnt1++;
    }
    if(sum==1){
        cout<<pow(2,cnt0);
    }
    else{
        if(cnt1==0) cout<<0;
        else if(cnt1==1 && cnt0 == 0) cout<<1;
        else
        cout<<2*(cnt0+cnt1-1);
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