#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mpp;
    for(ll i = 1; i<n-1; i++){
        mpp[s[i]]++;
        if(mpp[s[i]]>=2){
            cout<<"Yes"<<endl; return;
        }
    }

    for(ll i = 1; i<n-1; i++){
        if(s[i]==s[0]||s[i]==s[n-1]){
            cout<<"Yes"<<endl; return;
        }
    }
    cout<<"No"<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}