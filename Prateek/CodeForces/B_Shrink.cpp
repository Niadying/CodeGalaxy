#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    ll temp = 0;
    cin>>n;
    for(int i = 1; i<=n; i+=2){
        cout<<i<<" ";
    }
    if(n%2==0) temp = n;
    else temp = n-1;
    for(ll i = temp; i>=1; i-=2){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}