#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a,b;
    cin>>a>>b;
    ll ans = 0;
    if(a==b){
        cout<<0<<endl; return;
    }
    ll maxi = max(a,b);
    ll mini = min(a,b);
    if(maxi%mini!=0){
        cout<<-1<<endl; return;
    }
    ll divide = maxi/mini;
    ll cnt = 0;
    ll temp = 1;
    while(temp<=divide){
        if(temp==divide) break;
        temp*=2;
        cnt++;
    }
    if(temp==divide){
        ll temp = cnt/3;
        ans+=temp;
        cnt = cnt-(cnt/3);
        temp = cnt/2;
        ans+=temp;
        cnt = cnt - (cnt/2);
        ans+=cnt;
        cout<<cnt<<endl;
    }
    else
    cout<<-1<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}