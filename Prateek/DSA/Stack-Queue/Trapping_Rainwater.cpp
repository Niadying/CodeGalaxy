#include<bits/stdc++.h>
using namespace std;


int trap(vector<int>& height) {

    // OPTIMAL

     int n = height.size();
        int l = 0, r = n-1, leftmax = 0, rightmax = 0;
        int ans = 0 ;
        while(l<=r){
            if(height[l]>height[r]){
                if(rightmax>height[r]) ans+=rightmax-height[r];
                rightmax = max(height[r],rightmax);
                r--;
            }
            else{
                if(leftmax>height[l]) ans+=leftmax-height[l];
                leftmax = max(leftmax,height[l]);
                l++;
            }
        }
        return ans;



    // BRUTE FORCE (WE CAN REMOVE PREIFXMAX ARRAY BY STORING THE MAXIMUM SUM)....


    // int n = height.size();
    // vector<int>prefixMax(n);
    // vector<int>sufixMax(n);
    // prefixMax[0]=height[0];
    // sufixMax[n-1]=height[n-1];
    // int total = 0;
    // for(int i = 1; i<n; i++){
    //     prefixMax[i]=max(prefixMax[i-1],height[i]);
    // }
    // for(int i = n-2; i>=0; i--){
    //     sufixMax[i]=max(sufixMax[i+1],height[i]);
    // }
    // for(int i = 0; i<n; i++){
    //     int leftmax = prefixMax[i];
    //     int rightmax = sufixMax[i];
    //     if(height[i]<leftmax&&height[i]<rightmax){
    //         total+=min(leftmax,rightmax) - height[i];
    //     }
    // }
    // return total;
    
}


int main (){
    vector<int>height={0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = trap(height);
    cout<<ans<<endl;
}