#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s;
    cin>>s;
    int n = s.length();
    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='0')cnt0++;
        else cnt1++;
        // cout<<"CNT0"<<cnt0<<" "<<"Cnt1"<<cnt1<<endl;
    }
    int cnt = min(cnt1, cnt0);
    if(cnt%2==1) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
    
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}