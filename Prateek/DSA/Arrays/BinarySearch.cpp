// #include<iostream>
// using namespace std;

// int BinarySearch(int arr[], int n , int key){

//     int start = 0, end = n - 1;

//     while(s<e){

//         int mid = start + (end - start)/2;

//         if(arr[mid]==key){
//             return mid;
//         }
//         else if (arr[mid]>key){
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }

//     } 
//     return -1;
// }

// int main(){

//     int prateek[5]={1,2,3,4,5}; 
//     int index = BinarySearch(prateek, 5, 2);
//     cout<<index;
// }

// // QUESTIONS ON BINARY SEARCH 

// // 1ST AND LAST OCCCURENCE *****


// // #include<bits/stdc++.h>
// // using namespace std;

// // int firstOcc(vector<int>arr, int key , int n){

// //     int ans = -1; 
// //     int start = 0;
// //     int end = n - 1; 

// //     while(start<=end){

// //         int  mid = start + (end - start)/2;

// //         if(arr[mid]==key){
// //             ans = mid;
// //             end = mid - 1; 
// //         }

// //         else if (arr[mid]>key){
// //             end  = mid - 1 ;  
// //         }

// //         else {
// //             start = mid + 1; 
// //         }

// //     }
// // return ans ;
     
// // }

// // int lastOcc(vector<int>arr, int key , int n){

// //     int start = 0, ans = -1; 
// //     int end = n - 1;

// //     while (start <= end ){
// //         int mid  = start + (end - start )/2;
        
// //         if(arr[mid ]==key ){
// //             ans = mid ;
// //             start = mid + 1; 

// //         }

// //         else if (arr[mid]>key ){
// //             end = mid - 1; 
// //         }

// //         else {
// //             start = mid + 1; 
// //         }

// //     }
// // return ans ;
// // }

// // int main(){
// //     vector<int>arr={1,2,3,4,5,6,7,7,7,7,11};
    
// //     int first = firstOcc(arr,7,11);
// //     cout<<first<<endl;

// //     int last = lastOcc(arr,7,11);
// //     cout<<last<<endl;

// // }



// // MOUNTAIN PEAK INDEX                  

// // #include<iostream>
// // using namespace std;

// // int mountain (int arr[], int n ){

// //     int start = 0; 
// //     int end = n - 1; 

// //     while (start < end){
// //         int mid = start + (end - start)/2;

// //         if(arr[mid]<arr[mid +  1]){
// //             start = mid + 1;
// //         }
// //         else {
// //             end = mid;
// //         }
// //     }
// // cout<<start<<endl<<end;
// // }

// // int main (){
// //     int arr[7] = {1,2,10,9,2,1,0};
// //     mountain(arr,7);
// // }



// //PIVOT IN A ROTATAED ARRAY

// // #include<iostream>
// // using namespace std;

// // int pivot (int arr[],int n ){
// //     int s = 0; 
// //     int e = n - 1; 

// //     while (s<e){
    
// //     int mid = s + (e-s)/2;

// //     if(arr[mid]>=arr[0]){
// //         s = mid + 1; 

// //     } 
// //     else {
// //         e = mid; 
// //     }
    
// //     }
// //     cout<<arr[e]<<endl;
// //     return e ; 
// // }

// // int main (){

// //     int arr[5]= {1,2,3,7,9};
// //     int rotArr [5]={7,9,1,2,3}; // ROTATED BY 2 ELEMENTS

// //     int ans = pivot(rotArr, 5);
// //     cout<<ans;

// // }


// // SEARCH IN ROTATED AND SORTED ARRAY 

// // #include<iostream>
// // using namespace std;

// // int pivot(int arr[], int n){

// // int  s = 0 , e = n - 1;
// // while(s<e){

// //     int mid = s + (e - s )/2;

// //     if(arr[mid]>=arr[0]){

// //         s = mid + 1; 

// //     }

// //     else {
// //         e = mid;
// //     }

// // }
// // return e;
    

// // }

// // int BinarySearch (int arr[], int n, int s, int e, int key){

// //     while(s<=e){
// //     int mid  = s + (e-s)/2;
// //     if(arr[mid]==key){
// //         return mid;
// //     }
// //     else if(arr[mid ]>key ){
// //          e = mid - 1 ; 

// //     }

// //     else {
// //         s = mid + 1; 
// //     }
    
// //     }
// //     return -1; 
// // }
    


// // int main (){

// //     int arr [5]= {7,9,1,2,3};
// //     int piv = pivot(arr,5);
// //     int key;
// //     cout<<"Enter the element you want to search : ";
// //     cin>>key;
// //    int ans = -1;
// //     if(key>=arr[piv] && key <= arr [4]){
// //         ans = BinarySearch(arr,5,piv,4,key);
// //     }
// //     else{
// //         ans = BinarySearch(arr,5,0,piv-1,key);
// //     }

// //     cout<<ans<<endl;
         

// // }



// // SQUARE ROOT USING BINARY SEARCH 

// // #include<iostream>
// // using namespace std;

// // int SquareRoot(int n){

// // int s = 1 , e = n ,ans = -1 ;
// // while(s<=e){

// //     int mid = s + (e-s)/2;

// //     if(mid==n/mid){
// //         return mid;
// //     }
// //     else if (mid>n/mid){
// //         e = mid - 1;
// //     }
// //     else{
// //         ans = mid;
// //         s = mid + 1; 
// //     }
// // }
// // return ans;
// // }
 
// // double optimize(int n, int precision , double ans){

// //     double factor = 1;
// //     int temp = ans;
// //     for(int i = 0; i<precision; i++){
// //         factor = factor / 10;

// //         for(double j = temp; j<n/j; j= j + factor ){
// //             ans = j;
// //         }
// //     }
// //     return ans ;
// // }

// // int main (){

// //     int n;
// //     cout<<"Enter the value of n : ";
// //     cin>>n;
// //     int answer = SquareRoot(n);
// //     double final = optimize(n , 4, answer);
// //     cout<<final;
     
// // }


// // RECURSICE BINARY SEARCH

// // #include<bits/stdc++.h>
// // using namespace std;

// // int binarysearch (vector<int>&nums, int start, int end,int target){
// //     int mid = start+(end-start)/2;
// //     if(start>end) return -1;
// //     if(nums[mid]==target) return mid;
// //     else if (nums[mid]>target) binarysearch(nums,mid+1,end,target);
// //     else binarysearch(nums,start,mid-1,target);

// // }

// // int main (){
// //     vector<int>temp(7);
// //     temp={1,2,8,10,11,12,19};
// //     int target;
// //     cout<<"Enter target you wannt to search : ";
// //     cin>>target;
// //     cout<<binarysearch(temp,0,6,target);
    
// // }
#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>nums{1,2,3,4,5,6,7,8,9,10};
    cout<<accumulate(nums.begin(),nums.end(),0);
    int a = lower_bound(nums.begin(),nums.end(),3)-nums.begin();
    cout<<"\n"<<a<<endl;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int b = lower_bound(arr, arr+9,3)-arr;
    cout<<b<<endl;
}