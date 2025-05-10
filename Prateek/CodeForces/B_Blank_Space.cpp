#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int cnt = 0;
    int  maxi = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(nums[i]==0) cnt++;
        else{
            maxi = max(maxi,cnt);
            cnt = 0;
        }
    }
    maxi = max(maxi,cnt);
    cout<<maxi<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}