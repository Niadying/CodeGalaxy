#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    // vector<int>temp(n);
    vector<ll>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        nums[i] = pow(2,nums[i]);
    }
    ll sum1 = 0;
    for(int i = 0; i<n; i++){
        sum1+=nums[i];
        ll sum2 = 0;
        for(int j = i+1; j<n; j++){
            sum2+=nums[j];
            if(sum1==sum2){
                cout<<"YES"<<endl; return;
            }
        }
        if(sum1==sum2){
                cout<<"YES"<<endl; return;
            }
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