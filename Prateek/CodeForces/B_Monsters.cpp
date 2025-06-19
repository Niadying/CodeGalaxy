#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    map<int,vector<int>>mpp;
    for(int i = 0; i<n; i++) cin>>nums[i];
    for(int i = 0; i<n; i++){
        mpp[(nums[i]%k)].push_back(i+1);
    }
    vector<vector<int>>ans;
    for(auto i:mpp){
        // cout<<"KEY : "<<i.first<<" -> ";
        if(i.first==0){
            for(auto j:i.second){
                cout<<j<<" ";
            }
        }
        else{
            vector<int>temp;
            for(auto j:i.second){
                temp.push_back(j);
            }
            ans.push_back(temp);
        }
        
        // cout<<endl;
    }
    reverse(ans.begin(),ans.end());
    for(ll i = 0; i<ans.size(); i++){
        for(ll j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
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