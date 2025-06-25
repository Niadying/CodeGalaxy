#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    bool isdiv = false;
    int mini = 6;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(nums[i]%k==0) isdiv = true;
        mini = min(mini,k-nums[i]%k);
    }
    if(isdiv) cout<<0<<endl;
    else if(k==4){
        int cnt = 0;
        for(int i = 0; i<n;i++){
            if(nums[i]%2==0) cnt++;
        }
        if(cnt>=2)cout<<0<<endl;
        else if(cnt==1){
            cout<<1<<endl;
        }
        else{
            int left = n-cnt;
            if(left>=2){
                cout<<min(mini,2)<<endl;
            }
            else if (left==1){
                cout<<1+mini<<endl;
            }
            else{
                cout<<mini<<endl;
            }
        }
    }
    else
    cout<<mini<<endl;


}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}