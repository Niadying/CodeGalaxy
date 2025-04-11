#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    if(a==b && b==n){
        cout<<"Yes"<<endl;
        return;
    }
    if(a+b >= n-1){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}