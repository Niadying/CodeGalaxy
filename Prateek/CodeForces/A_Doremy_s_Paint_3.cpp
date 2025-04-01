#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    map<int,int>mpp;
    for(int i = 0; i<n; i++){
        mpp[nums[i]]++;
    }
    if(mpp.size()>2){
        cout<<"No";
    }
    else{
        if(mpp.size()==1) {cout<<"Yes"<<endl; return;}

        else{
            vector<int>temp;

            for(auto i:mpp){
                temp.push_back(i.second);
            }

            if(temp[0]-temp[1] ==0 || abs(temp[0]-temp[1])==1) cout<<"Yes";
            else cout<<"No";
        }
    }
    cout<<endl;
}
int  main (){
    int y;
    cin>>y;
    while(y--) solve();
}