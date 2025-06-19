#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<ll>>nums(n,vector<ll>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>nums[i][j];
        }
    }
    bool minusDetected = false;
    ll cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(nums[i][j]<0){
                minusDetected = true;
                cnt++;
            }
        }
    }
    ll sum = 0;
    ll mini = INT_MAX;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            mini = min(mini,abs(nums[i][j]));
            sum+=abs(nums[i][j]);
        }
    }
    if(cnt%2==1){
        sum-=(2*abs(mini));
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