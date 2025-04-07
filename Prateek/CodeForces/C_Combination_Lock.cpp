#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
   int n;
   cin>>n;
    if((n&1)==0){
        cout<<-1<<endl;
        return;
    }
   for(int i = 1; i<=n; i+=2){   
        cout<<i<<" ";
   }
   for(int i = 2; i<=n; i+=2){
    cout<<i<<" ";
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