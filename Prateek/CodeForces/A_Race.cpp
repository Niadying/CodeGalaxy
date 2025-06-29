#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,x,y;
    cin>>a>>x>>y;
    if(y>x){
        ll temp = y;
        y = x;
        x = temp;
    }

    if(a<y||a>x){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}