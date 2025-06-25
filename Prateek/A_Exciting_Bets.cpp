#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<" "<<0<<endl;
        return;
    }
    ll gcd1 = abs(a-b);
    ll move1 = min(a,b);
    ll gcd2 = __gcd(++a,++b);
    ll move2 = 1;

    if(gcd1>gcd2){
        cout<<gcd1<<" "<<move1;
    }
    else if (gcd1 == gcd2){
        cout<<gcd1<<" "<<min(move1,move2);
    }
    else cout<<gcd2<<" "<<move2;
    cout<<endl;

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}