#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    n = s.length();
    ll cnt = 0;
    ll temp = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='('){ cnt++;temp++;}
        else if (cnt&&s[i]==')'){ cnt--;temp++;}
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