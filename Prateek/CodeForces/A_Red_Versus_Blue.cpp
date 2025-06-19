#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,r,b;
    cin>>n>>r>>b;
    ll parts = b+1;
    ll diff = (r/(b+1));
    bool notDivide = false;
    if(r%(b+1)!=0){
        diff++;
        notDivide = true;
    }
    ll cnt = 0;
    for(int i = 0; i<n; i++){
        if(diff==cnt && b){
            cnt = 0;
            cout<<"B";
            b--;   
            diff = (r/(b+1));  
        }
        else if (r){
            cnt++;
            cout<<"R";
            r--;
        }

    }
    while(r--) cout<<"R";
    while(b--) cout<<"B";
    cout<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}