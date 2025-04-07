#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int x,k;
    cin>>x>>k;
    int sum = 0;
    vector<ll>ans;
    for(int i = x; i>=1; ){
        if(i%k != 0){
            if(sum+i == x ){
                ans.push_back(i);
                break;
            }
            if(sum+i < x){
                sum+=i;
                ans.push_back(i);
            }
            if(sum+i > x){
                i--;
            }
        }
        else i--;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans){
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