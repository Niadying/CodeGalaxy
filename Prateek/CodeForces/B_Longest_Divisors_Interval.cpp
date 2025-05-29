#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    ll i = 1, cnt = 0;
    while(n%i==0){
        cnt++; i++;
    }
    cout<<cnt<<endl;
}   

int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}