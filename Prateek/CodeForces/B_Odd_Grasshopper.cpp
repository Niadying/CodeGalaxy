#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll x,n;
    cin>>x>>n;
    ll temp = n/4;
    temp = temp*4;
    ll temp1 = n%4;
    if((abs(x)%2)==0){
        if(temp1==1){
            x += -(temp+1);
        }
        else if (temp1==2){
            x += -(temp+1)+temp+2;
        }
        else if (temp1==3){
            x += -(temp+1)+temp+2+temp+3;
        }
    }
    else{
        if(temp1==1){
            x += temp+1;
        }
        else if(temp1==2){
            x += temp+1-(temp+2);
        }
        else if (temp1==3){
            x += temp+1-(temp+2)-(temp+3);
        }
    }
    // cout<<"TEMP : "<<temp<<" TEMP1 " <<temp1<<endl;
    cout<<x<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}