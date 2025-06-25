#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>nums(n);
    ll sum = 0;
    vector<ll>prefix(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        sum+=nums[i];
        prefix[i]=sum;
    }
    int l,r,k;
    for(int i = 0; i<q; i++){
        cin>>l>>r>>k;
        ll del = 0;
        if(l==1){
            del = prefix[r-1];
        }
        else del = prefix[r-1]-prefix[l-2];
        ll temp = prefix.back()-del + (k*(r-l+1));
        if(temp%2==0) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}