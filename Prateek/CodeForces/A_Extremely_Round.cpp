#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int y;
    cin>>y;
    int n = y;
    int cnt = 0;
    n = y;
    if(n<=10) cnt+=n;
    else if(n<=100){
        int ans = n/10;
        cnt+=ans-1+10;
        n = y;
    }
    else if(n<=1000){
        int ans = n/100;
        cnt+=ans-1+19;
        n = y;
    }
    else if(n<=10000){
        int ans = n/1000+9+19;
        cnt+=ans-1;
        n = y;
    }
    else if(n<=100000){
        int ans = n/10000+19+9+9;
        cnt+=ans-1;
        n = y;
    }
    else if(n<=1000000){
        int ans = n/100000+19+9+9+9;
        cnt+=ans-1;
        n = y;
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