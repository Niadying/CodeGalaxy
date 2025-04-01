#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    map<int,int>freq;
    int ans = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        freq[nums[i]]++;
        ans = ans^nums[i];
    }

    bool twice = false;
    for(auto i:freq){
        if(i.second%2 == 0){
            twice = true;
        }
    }
    if(twice) cout<<-1;
    else cout<<ans;
    cout<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}