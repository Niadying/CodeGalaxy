#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int neg = 0,pos=0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(nums[i]==1) pos++;
        else neg++;
    }

    // if((pos>=neg && neg%2==0)){
    //     cout<<0<<endl;
    // }
    // else if(pos>=neg && neg%2==1){
    //     cout<<1<<endl;
    // }
    // else{
    //     int diff = neg-pos;
    //     if(pos==0){
    //         if(neg>=3){
    //             cout<<neg<<endl;
    //         }
    //         else{
    //             cout<<neg-(neg/2);
    //         }
    //     }
    //     else if (pos%2==1){
    //         cout<<neg-pos-1<<endl;
    //     }
    //     else{
    //         if(neg%2==0){
    //             cout<<neg-pos-1<<endl;
    //         }
    //         else{
    //             cout<<neg-pos<<endl;
    //         }
    //     }
    // }
    int cnt =  0;
    while(pos<neg){
        pos++;
        neg--;
        cnt++;
    }
    if(neg%2 != 0) cnt++;
    cout<<cnt<<endl;

}
int main (){
    ll y;
    cin>>y;
    while(y--){
        solve();
    }
}