#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,b;
    cin>>a>>b;
    ll ans = INT_MAX;
    ll z = b;
    
    if(a<b) {cout<<1<<endl;return;}
    if(a==b){
        cout<<2<<endl; return;
    }
    bool change = false;
    bool b1 = false;
    if(b==1){
        b1 = true;
        b++;
    }
    while(!change){
        ll cnt = b-z;
        // if(b1) cnt++;
        ll temp = a;
        
        while(temp!=0){
            cnt++;
            temp/=b;
        }
        
        if(ans<cnt) change = true;
        ans = min(ans,cnt);
        b++;

    }
    cout<<ans<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}