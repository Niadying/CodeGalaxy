#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n*k);
    for(int i = 0; i<n*k; i++){
        cin>>nums[i];
    }
    int sum = 0;
    int median = (n-1)/2;
    if(n==1){
        cout<<accumulate(nums.begin(),nums.end(),0)<<endl; return;
    }
    if(n==2){
        for(int i = 0; i<n*k; i+=2){
            sum+=nums[i];
        }
        cout<<sum<<endl; return;
    }

    int temp = n-median-2;
    int cnt = 0;
    while(cnt!=k){
        cnt++;
        sum+=nums[temp];
        temp -=n-median-1;        
    }
    cout<<sum<<endl;

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}