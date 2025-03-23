#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    while(n--){
        int y;
        cin>>y;
        vector<int>nums(y);
        int mini = INT_MAX;
        for(int i = 0; i<y; i++){
            cin>>nums[i];
            mini = min(nums[i],mini);
        }
        
        if(mini == nums[0]) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}