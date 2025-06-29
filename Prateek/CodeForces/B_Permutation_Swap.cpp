#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int mini = INT_MAX;
    for(int i = 0; i<n; i++){
        int diff = abs(i-nums[i]+1);
        if(diff!=0){
            mini = min(mini,diff);
        }
    }
    cout<<mini<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}