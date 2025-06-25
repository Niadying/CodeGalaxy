#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i = 0; i<n ;i++){
        cin>>nums[i];
    }
    int temp = nums[k-1];
    int cnt =  0;
    for(int i = 0; i<n ;i++){
        if(nums[i]>=temp && nums[i]>0){
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
int main (){
    // ll y;
    // cin>>y;
    solve();
}