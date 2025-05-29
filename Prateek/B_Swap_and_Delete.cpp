#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s;
    cin>>s;
    int cnt = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='0') cnt++;
        else cnt--;
    }
    cout<<abs(cnt)<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}