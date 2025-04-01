#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,k;
    cin>>n>>k;
    if(k%2==1) cout<<"YES";
    else{
        if(n%2==0) cout<<"YES";
        else cout<<"NO";
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