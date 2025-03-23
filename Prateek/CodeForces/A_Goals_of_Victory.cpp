#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n-1);
    int sum = 0;
    for(int i = 0; i<n-1; i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    cout<<0-sum<<endl;
}

int main (){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}