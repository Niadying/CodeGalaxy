#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int two = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(nums[i]==2) two++;
    }
    int ans = -1;
    if((two&1)==0){
        int y = two/2;
        int cnt = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==2){
                cnt++;
            }
            if(cnt == y){
                ans = i+1;
                break;
            }
        }
    }
    cout<<ans<<endl;

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}