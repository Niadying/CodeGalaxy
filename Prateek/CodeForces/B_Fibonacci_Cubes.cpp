#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>nums={1,2};
    int a = 1, b = 2;
    ll cnt = 1;
    while(cnt<=n-2){
        int sum = a+b;
        nums.push_back(sum);
        a = b;
        b = sum;
        cnt++;
    }
    reverse(nums.begin(),nums.end());

    for(int i = 0; i<m; i++){
        int w,l,h;
        cin>>w>>l>>h;
        bool length = false, width = false;
        int wl=w-nums[0];
        int lleft = l - nums[0];
        if(nums[0]>w || nums[0]>l || nums[0]>h){
                cout<<"0";
        }
        else if (wl>=nums[1] || lleft>=nums[1]){
            int j = 1; 
            while(wl>=nums[j] && j<n){
                wl = w-nums[j];
                j++;
            }
            if(j<n && nums[j]+nums[0]>h)width = true;
            else cout<<1;
        }
        else if (lleft>=nums[1]){
            int j = 1; 
            while(lleft>=nums[j] && j<n){
                lleft = l-nums[j];
                j++;
            }
            if(j<n && nums[j]+nums[0]>h) length = true;
            else cout<<1;
        }
        else if (length && width) cout<<0;
        else if (nums[1]+nums[0]>h) cout<<"0";
        else cout<<"1";
    }
    cout<<endl;
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}