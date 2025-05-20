#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n ;i++){
        cin>>nums[i];
    }
    int cnt = 0;
    int cnt0 = 0;
    vector<int>temp;
    for(int i = 0; i<n; i++){
        if(nums[i]!=0){
            cnt++;
        }
        else{
            cnt0++;
            if(cnt)
            temp.push_back(cnt);
            cnt = 0;
        }
    }
    if(cnt){
        temp.push_back(cnt);
    }
    int y = temp.size();
    int sum = accumulate(temp.begin(),temp.end(), 0);
        
    cout<<min(y,sum)<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}