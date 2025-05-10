#include<bits/stdc++.h>
using namespace std;

void solve (){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    bool present = false;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(nums[i]==k) present = true;
    }
    if(present==true){ cout<<"YES"<<endl;return;}
    cout<<"NO"<<endl;
    

}
int main (){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}