#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>nums(n,vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>nums[i][j];
        }
    }
    for(int i = 0; i<m-1; i++){
        if(nums[0][i]<=0 && nums[0][i+1]<=0){
            nums[0][i]*= (-1);
            nums[0][i+1]*= (-1);
        }
        if(nums[n-1][i]<=0 && nums[n-1][i+1]<=0){
            nums[n-1][i]*=(-1);
            nums[n-1][i+1]*=(-1);
        }
    }
    for(int j = 0; j<n-1; j++){
        if(nums[j][0]<=0 && nums[j+1][0]<=0){
            nums[j][0]*=(-1);
            nums[j+1][0]*=(-1);
        }    
        if(nums[j][m-1]<=0 && nums[j+1][m-1]<=0){
            nums[j][m-1]*=(-1);
            nums[j+1][m-1]*=(-1);
        }
    }
    ll sum = 0;
    for(int i = 1; i<n-1; i++){
        for(int j = 1; j<m-1; j++){
            int top = nums[i-1][j];
            int bottom = nums[i+1][j];
            int right = nums[i][j-1];
            int left = nums[i][j+1];
            if(nums[i][j]<=0){
                if(top<=0 && bottom <= 0 && right<=0 && left<=0){
                    nums[i][j];
                }
            }
        }
    }
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}