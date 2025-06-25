#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>nums(n);
    for(int i = 0;i<n; i++){
        cin>>nums[i];
    }
    ll cnt = 0;
    vector<int>interval;
    for(int i = 0; i<n; i++){
        if(nums[i]<=q) cnt++;
        else{
            interval.push_back(cnt);
            cnt=0;
        }
    }
    if(cnt) interval.push_back(cnt);
    cnt = 0;
    for(int i = 0; i<interval.size(); i++){
        int temp = k;
        int index = interval[i];
        if(index>=k){
            while(temp!=index+1){
                cnt = cnt + (index-temp) + 1;
                temp++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}