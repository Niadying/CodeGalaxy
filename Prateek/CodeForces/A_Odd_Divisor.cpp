#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    ll power = 1;
    while(power<n){
        power*=2;
        if(power==n){
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}