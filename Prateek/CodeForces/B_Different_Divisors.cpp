#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll n){
    ll cnt = 0;
    if(n==1) return true;
    if(n==2) return true;
    if(n%2==0) return false;
    for(ll i = 1 ;i<=n;i+=2){
        if(n%i==0) cnt++;
        if(cnt>2) return false;
    }
    return true;
}

void solve(){
    ll d;
    cin>>d;
    ll one = 0 , two = 0 , three = 0;
    bool got = false;
    ll temp = d+1;

    while(!got){
        got = isPrime(temp);
        if(got){
            one = temp;
            break;
        }
        temp++;

    }
    got = false;
    temp+=d;
    while(!got){
        got = isPrime(temp);
        if(got){
            if(temp-one >= d)
            two = temp;
            break;
        }
        else got = false;
        temp++;
    }
    // cout<<one<<" "<<two<<endl;
    cout<<min(ll(pow(temp,3)),one*two)<<endl;
    // cout<<three<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}