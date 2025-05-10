#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;
    cin>>n>>k>>x;
    long long total = (n*(n+1))/2;
    long long subtotal = (k*(k+1))/2;
    long long lastotal = (k*(2*n - (k-1)))/2;

    if(x>total || x<subtotal || k>x || x>lastotal){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}
int main (){
    long long y;
    cin>>y;
    while(y--){
        solve();
    }
}