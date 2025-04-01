#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    ll cnt = 0;
    if(n%6 == 1){
        cout<<0<<endl;
        return;
    }
    while(n!=0){
        if((n%6)==1){
            cout<<cnt<<endl;
            return;
        }
        else{
            if(n%6 == 0){
                n=n/6;
                cnt++;
            }
            else if (n%3==0){
                n*=2;
                cnt++;
            }
        }
    }
    cout<<-1<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}