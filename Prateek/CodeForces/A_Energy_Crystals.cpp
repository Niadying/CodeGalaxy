#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    if(n==1) {cout<<3<<endl; return;}

    ll a = 1, b = 1, c = 3;
    ll cnt = 3;
    while(a<n && b<n && c<n){
        if(cnt%3==0){
            a = min(b,c)*2 + 1;
        }
        else if (cnt%3==1){
            b = min(a,c)*2 + 1;
        }
        else c = min(a,b)*2 + 1;
        cnt++;
    }
    if(a<n) cnt++;
    if(b<n) cnt++;
    if(c<n) cnt++;
    cout<<cnt<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}