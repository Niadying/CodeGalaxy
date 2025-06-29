#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,d;
    cin>>n>>d;
    vector<ll>nums(n);
    for(ll i = 0; i<n; i++) cin>>nums[i];
    sort(nums.begin(),nums.end());
    ll i = 0, j = n-1;
    ll cnt = 0;
    ll sum = 0;
    ll temp = 2;
    bool checked = false;
    while(i<j){
        checked = false;
        if(nums[j]>d){
            cnt++;
            j--;
        }
        else if (sum>d){
            cnt++;
            j--;
            // i++;
            temp = 2;
            sum = 0;
            checked = true;
        }
        else{
            sum = temp*nums[j];
            i++;
            temp++;
        }

    }
    if (sum>d&&!checked){
        cnt++;
        j--;
        i++;
        temp = 2;
    }
    cout<<cnt<<endl;
}
int main (){
    ll y = 1;
    while(y--){
        solve();
    }
}