#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,m;
    cin>>n>>m;
    int maxi = 0;
    ll second = 0;
    vector<ll>x,y;
    ll x1 = 0, y1 = 0, x2 = 0, y2 =0;
    vector<vector<int>> nums(n, vector<int>(m, 0));
    map<int,int>mpp;
    for(ll i = 0; i<n; i++){
        for(ll j = 0; j<m; j++){
            cin>>nums[i][j];
            maxi = max(maxi,nums[i][j]);
            mpp[nums[i][j]]++;
        }
    }
    if(mpp[maxi]<=2 || n<=2 || m<=2){
        cout<<maxi-1<<endl;
        return;
    }
    ll maxi1 = 0, maxi2 = 0;
    for(ll i = 0; i<n; i++){
        ll cnt1 = 0;
        for(ll j = 0; j<m; j++){
            if(nums[i][j]==maxi){
                cnt1++;
            }
        }
        if(cnt1>maxi1){
            x1 = i;
            y1 = i;
            cnt1 = maxi1;
        }
    }

    for(ll i = 0; i<m; i++){
        ll cnt1 = 0;
        for(ll j = 0; j<n; j++){
            if(nums[j][i]==maxi){
                cnt1++;
            }
        }
        if(cnt1>maxi2){
            if(i!=x1)
            y1 = i;
            cnt1 = maxi2;
        }
    }
    
    cout<<maxi-1<<endl;
}

int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}