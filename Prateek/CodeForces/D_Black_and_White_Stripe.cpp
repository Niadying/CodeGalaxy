#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll cntb = 0, cntw = 0;
    vector<ll>b;
    vector<ll>w;
    for(int i = 0; i<n; i++){
        if(s[i]=='B'){
            cntb++;
            if(cntw)
            w.push_back(cntw);
            cntw = 0;
        }
        else {
            if(cntb)
            b.push_back(cntb);
            cntb = 0;
            cntw++;
        }
    }
    ll cnt = 0;
    ll i  = 0, j = 0;
    while(i<b.size() && j<w.size()){
        
    }
    

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}