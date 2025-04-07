#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d){
        cout<<-1<<endl;
        return;
    }
    int cnt =  0;
    while(b!=d){
        b+=1;
        cnt++;
        a+=1;
    }

    if(a>=c){
        cnt+=abs(a-c);
        cout<<cnt<<endl;
    }
    else cout<<-1<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}