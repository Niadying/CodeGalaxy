#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a,b;
    cin>>a>>b;
    int xk,yk,xq,yq;
    cin>>xk>>yk>>xq>>yq;
    int cnt = 0;
    int relx = abs(xk-xq);
    int rely = abs(yk-yq);

    int x = relx - a;
    int y = rely - b;

    if((abs(x)==a && abs(y)==b)|| (abs(x)==b && abs(y)==a)){
        if(x==y){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
    }
    else cout<<0<<endl;
    
    

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}