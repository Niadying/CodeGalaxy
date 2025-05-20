#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<int>nums(n);
    for(int i = 0; i<n ;i++){
        cin>>nums[i];
    }

    ll mini = 0, maxi = 0;
    for(int i = 0 ;i<n ;i++){
        maxi = maxi + ceil(double(nums[i])/double(x));
        mini+=nums[i];
    }
    mini = ceil(double(mini)/double(x));
    cout<<mini<<" "<<maxi<<endl;

    
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}