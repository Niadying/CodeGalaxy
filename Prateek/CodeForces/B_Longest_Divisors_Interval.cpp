#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    ll cnt = 0;
    ll maxi = 0;
    for(ll i = 1; i<=n/2; i++){
        if((n%i) == 0) cnt++;
        else{
            maxi = max(maxi,cnt);
            cnt=0;
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