#include<iostream>
#include<vector>

using namespace std;


//BUY AND SELL STOCKS!!

int maximumProfit(vector<int> &prices){
    int mini = prices[0];
    int maxprofit=0;
    int n =prices.size();
    for (int i=0;i<n;i++){
        int cost =prices[i]-mini;
        maxprofit=max(maxprofit,cost);
        mini=min(mini,prices[i]);

    }
    return maxprofit;
}

//3 sum

//  int n=nums.size();
        
//         set<vector<int>> st;
//         for (int i=0;i<n;i++){
//             for (int j=i+1;j<n;j++){
//                 for(int k =j+1;k<n;k++){
//                 if (nums[i]+nums[j]+nums[k]==0 ){
//                     vector<int> temp={nums[i],nums[j],nums[k]};
//                    sort(temp.begin(),temp.end());
//                    st.insert(temp);
//                 }
//             }
//             }
//         }
//         vector<vector<int>> ans(st.begin(),st.end());
//         return ans;