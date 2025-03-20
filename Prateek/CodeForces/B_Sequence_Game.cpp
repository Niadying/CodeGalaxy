#include<bits/stdc++.h>
using namespace std;

void solve (){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    vector<int>ans;
    ans.push_back(nums[0]);
    if(is_sorted(nums.begin(),nums.end())){
        for(int i = 0; i<n; i++){
            cout<<nums[i]<<endl;
            return;
        }
    }
    else{
        for(int i = 2; i<n; i++){
            if(nums[i-1]<=nums[i]){
                
            }
            else{

            }
        }
    }
}

int main (){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}