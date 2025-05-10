#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int cnt = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        cnt++;
    }
    int ans = 0;
    for(int i = 0; i<n;i++){
        ans = ans^nums[i];
    }
    if((n&1)==0 && ans!=0) cout<<-1;
    else cout<<ans;
    cout<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}