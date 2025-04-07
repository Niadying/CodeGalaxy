#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>nums(n);
    for(int i = 0; i<n ;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int index = n;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(nums[i]>=x){
            index=i;
            break;
        }
    }
    cnt = n-index;
    int size;
    for(int i = index-1; i>=0; i-=size){
         size = 2;
        for(int j = i-1; j>=0; j--){
            int mini = nums[j];
            if(mini*size < x){
                size++;
            }
            else{
                cnt++;
                break;
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