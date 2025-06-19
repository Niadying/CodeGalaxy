#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,ll>mpp;
    ll cnt =  0;
    ll index = n+1;
    for(ll i = 0 ; i<n; i++){
        if(mpp.find(s[i])!=mpp.end()){
            index = i;
            break;
        }
        else{
            cnt++;
            mpp[s[i]]++;
        }
    }
    mpp.clear();
    for(ll i = index; i<n; i++){
        if(mpp.find(s[i])==mpp.end()){
            cnt++;
        }
        mpp[s[i]]++;
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