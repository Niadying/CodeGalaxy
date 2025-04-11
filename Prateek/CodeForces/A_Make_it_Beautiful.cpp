#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    map<int,int>freq;
    int index = 0;
    int diff = 0;
    for(int i = 0; i<n ;i++){
        cin>>nums[i];
        freq[nums[i]]++;
        if(nums[i]!=nums[0]){
            diff = nums[i];
            index = i;
        }
    }

    sort(nums.rbegin(),nums.rend());
        
    if(freq.size()==1){
        cout<<"NO"<<endl;
    }
    
    else{
        cout<<"YES"<<endl;
        cout<<nums[index]<<" ";
        for(int i = 0; i<index; i++){
            cout<<nums[i]<<" ";
        }
        for(int i = index+1; i<n; i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }

   
}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}