#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int mini = INT_MAX;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(abs(nums[i])<mini) mini = abs(nums[i]);
    }
    cout<<mini<<endl;
    
}
