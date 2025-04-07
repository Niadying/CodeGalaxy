#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c%2==0){
        if(a>b){
            cout<<"First";
        }
        else cout<<"Second";
    }
    else{
        if(b>a) cout<<"Second";
        else cout<<"First";
    }
    cout<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}