#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int cnt = 0;
    for(int i = n-2; i>=0; i--){
        while(nums[i]>=nums[i+1] && nums[i+1]!=0 ){
            cnt++;
            nums[i]=floor(double(nums[i])/double(2.0));
        }
        if(nums[i+1]==0){
            cout<<-1<<endl;
            return;
        }
        // int temp = nums[i+1];
        // int sum = nums[i+1]/2;
        // cnt+=sum;
        // nums[i]=nums[i+1]/(2*sum);
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