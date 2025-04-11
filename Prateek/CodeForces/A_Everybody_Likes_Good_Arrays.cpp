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
    vector<int>temp1;
    int odd = 0;
    int even = 0;
    for(int i = 0; i<n; i++){
        if(nums[i]%2 == 0){
            even++;
            if(odd>=1)
            temp1.push_back(odd-1);
            odd = 0;
        }
        else if(nums[i]%2==1){
            odd++;
            if(even>=1)
            temp1.push_back(even-1);
            even = 0;
        }
    }
    if(odd>=1)
    temp1.push_back(odd-1);
    if(even>=1)
    temp1.push_back(even-1);
    cout<<accumulate(temp1.begin(),temp1.end(),0)<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}