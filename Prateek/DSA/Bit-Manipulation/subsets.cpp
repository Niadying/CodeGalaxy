#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> subsets(vector<int>& nums) {
    int numberSubset = 1<<nums.size();
    vector<vector<int>>ans;
    for(int i = 0; i<numberSubset; i++){
        vector<int>temp;
        int number = nums[i];
        for(int j = 0; j<nums.size(); j++){
            int temper = i>>j;
            if(temper&1){
                temp.push_back(nums[j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}

int main(){
    vector<int>set = {1,2,3};
    vector<vector<int>>powerset = subsets(set);
    for(int i = 0; i<powerset.size(); i++){
        cout<<"[";
        for(int j = 0; j<powerset[i].size(); j++){
            cout<<powerset[i][j];
            if(j+1<powerset[i].size()) cout<<",";
        }
        cout<<"]";
        if(i+1<powerset.size()) cout<<",";
    }
}