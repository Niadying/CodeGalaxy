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

    for(int i = 0; i<n; i++){
        int mini = nums[i];
        int j = i+1, k = n-1;
        while(j<k){
            if(nums[j]>mini && nums[k]<nums[j]){
                cout<<"YES"<<endl;
                cout<<++i<<" "<<++j<<" "<<++k<<endl;
                return;
            }
            if(nums[j]>mini) k--;
            else j++;
            // j++;
            // k--;
        }
    }
    cout<<"NO"<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}