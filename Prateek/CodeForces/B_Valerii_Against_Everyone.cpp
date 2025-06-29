#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n;
    cin>>n;
    vector<ll>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    for(int i = 0; i<n-1; i++){
        vector<ll>temp = nums;
        ll sum1 = 0;
        ll sum2 = 0;
        sort(temp.begin(),temp.begin()+i);
        for(int j = 0; j<i; j++){
            if(temp[j]==temp[j+1]){
                temp[j+1]==temp[j]++;
                sum1 = temp[j+1];
            }
        }
        if(i==0) sum1 = nums[0];

        for(int j = i+1; j<n; j++){
            sort(temp.begin()+j,temp.end());
             if(temp[j]==temp[j+1]){
                temp[j+1]==temp[j]++;
                sum1 = temp[j+1];
            }
        }
        if(sum1==sum2){
            cout<<"YES"<<endl; return;
        }
    }
    cout<<"NO"<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}