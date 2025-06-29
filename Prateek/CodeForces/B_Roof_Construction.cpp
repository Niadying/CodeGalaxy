#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    for(ll i = 1; i<n; i+=2){
        cout<<i<<" ";
    }
    cout<<0<<" ";
    ll temp = n-1;
    if(temp%2!=0) temp = n - 2;
    for( ; temp>0; temp-=2) cout<<temp<<" ";
    cout<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}