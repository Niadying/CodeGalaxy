// #include<iostream>
// using namespace std;

// bool isprime(int n){

//     bool k = 1;
//     for(int i = 2; i<=n-1; i++){

//     if (n%i==0){

//             k = 0;
//             break;
//         }
//     }
//     return k;
// }
//     int main(){

//         int n;
//         cout<<"Enter the number : ";
//         cin>>n;
//         bool y =isprime(n);
//         cout<<y;

//     }



// #include<iostream>
// using namespace std;

// int ap(int n){
    
//     int ans = (3*n)+7;
//     return ans;

// }

// int main(){

//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int sol = ap(n);
//     cout<<sol;
// }



// CALCULATE TOTAL NUMBER OF SETBITS IN GIVEN 2 NUMBERS (NO. OF 1 IN BINARY FORM)*********************


// #include<iostream>
// using namespace std;

// int setbit(int n){

//     int count = 0;
//     for(int i = 1; n!=0; i++){

//         if(n&1!=0){
//             count++;
//         }
//       n =  n>>1;
//     }
//     return count;

// }

// int main(){

//     int a,b;

//     cout<<"Enter the value of a : ";
//     cin>>a;

//     cout<<"Enter the value of b : ";
//     cin>>b;


//     int ans = setbit(a)+setbit(b);
//     cout<<ans;

    // return 0 ;


// }




#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>nums={1,1,2};
        int n = nums.size();
        vector<int>temp;
        temp.push_back(nums[0]);
        for(int i = 0; i<n; i++){
            int index = nums[i];
            if(temp.back()<index)
            temp.push_back(nums[i]);
        }
        nums.erase(nums.begin(), nums.end());
        for(int i = 0;i<temp.size() ; i++){
            nums.push_back(temp[i]);
        }
        
       for(auto i:nums){
        cout<<i<<" ";
       }

        
}