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
    int ans = 0;
    int a = problem.front();
    if(problem.size()==1){
        ans = min(a,n-a);
    }
    if(problem.size()==2){
        int b = problem[1];
        ans = min(b, n-a);
    }
    if(problem.size()>=3){
        int b = problem.back();
        
    }

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}