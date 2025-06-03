#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    vector<int>problem;

    sort(nums.begin(),nums.end());
    for(int i = 1; i<n; i++){
        if(nums[i]-nums[i-1]>k){
            problem.push_back(i);
        }
    }
    if(problem.size()==0){
        cout<<0<<endl;
        return;
    }
    if(problem.size()==1){
        cout<<min(problem[0],n-problem[0])<<endl; return;
    }
    int y = problem.size();
    int ans = INT_MAX;
    int index = problem[0];
    for(int i = 0; i<y-1; i++){
        int temp = problem[i];
        int temp1 = problem[i+1];
        int diff = problem[i]+n-problem[i+1];
        ans = min(ans,diff);
    }
    ans = min(ans,min(problem.back(), n-problem[0]));
    cout<<ans<<endl;

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}