#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i  = 0; i<n; i++){
        cin>>nums[i];
    }
    bool sorted = is_sorted(nums.begin(),nums.end());
    if(sorted){
        int mini = INT_MAX;
        for(int i = 0; i<n-1; i++){
            int a = nums[i], b = nums[i+1];
            int cnt = 0;
            if((a%2==1 && b%2==1)|| (a%2==0 && b%2 ==0 )){
                cnt = (abs(a-b)/2)+1;
            }
            else{
                cnt = (abs(a-b)/2)+1;
            }

            mini  = min(mini,cnt);
        }
        cout<<mini;
    }
    else cout<<0;
    cout<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}