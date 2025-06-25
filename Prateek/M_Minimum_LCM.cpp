#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    ll a = 1; 
    ll b = n-1;
    ll mini = n-1;
    ll ans = 1;
    ll ans2 = n-1;
    while(b!=(n/2)-1){
        ll temp = __gcd(a,b);
        temp = (a*b)/temp;
        if(mini>temp){
            ans = a;
            ans2 = b;
        }
        mini = min(temp,mini);
        a++;
        b--;
    }
    cout<<ans<<" "<<ans2<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}