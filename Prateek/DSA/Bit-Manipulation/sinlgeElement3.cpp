#include<bits/stdc++.h>
using namespace std;
using ll = long long;


pair<ll,ll> singleEl(vector<ll>nums){
    ll ones = 0, twos = 0,XORR = 0;
    for(ll i = 0; i<nums.size(); i++){
        XORR^=nums[i];
    }
    ll firstSetBit = (XORR&XORR-1)^XORR;

    for(ll i = 0; i<nums.size(); i++){
        if(nums[i]&firstSetBit)  ones^=nums[i];
        else twos^=nums[i];
    }
    return {ones,twos};
}

int main (){
    vector<ll>nums={2,4,2,14,3,7,7,3,4,14,45,54};
    cout<<singleEl(nums).first<<" "<<singleEl(nums).second<<endl;
}