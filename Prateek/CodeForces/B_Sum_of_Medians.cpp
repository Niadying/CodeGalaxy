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
    int mid = (n-1)/2;
    if(mid==0){
        for(int i = 0; i<n; i++){
            
        }
    }
    int index = n*k - n + 1;
    ll sum = 0;
    int cnt = 0;
    for(int i = index; i>=0 ;i = i - 1 - (n/2)){
        cnt++;
        sum+=  nums[i];
        if(cnt==k) break;

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