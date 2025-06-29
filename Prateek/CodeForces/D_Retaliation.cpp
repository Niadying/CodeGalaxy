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
    ll difference = nums[0]-nums[1];
    for(int i = 0; i<n-1; i++){
        if(nums[i]-nums[i+1]!=difference){
            cout<<"NO"<<endl; return;
        }
    }
    ll mini = *min_element(nums.begin(),nums.end());
    ll maxi = *max_element(nums.begin(),nums.end());
    if(mini == 1 && abs(difference)==1){
        cout<<"YES"<<endl;
    }
     if(n==2){
        if((mini%2==0 && maxi%2==1) || (mini%2==1&&maxi%2==0)){
            cout<<"YES"<<endl; return;
        }
        if(difference>mini){
            cout<<"NO"<<endl; return;
        }
    }
    cout<<"YES"<<endl;
    

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}