#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    ll ans = k;
    ll sticks = k+(y*k);
    ll diff = x-1;
    sticks -= x;
    ans++;
    ll temp = sticks/diff;
    ans = ans + (sticks/diff);
    if(diff*temp < sticks)
    ans++;
    cout<<ans<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}