// 2ND LARGEST AND 2ND SMALLEST

// #include<bits/stdc++.h>
// using namespace std;


// int secondSmallest (int arr[], int n){
//     int smallest = arr[0];
//     int secondsm = INT_MAX;

//     for(int i = 1; i<n ;i++){

//         if(arr[i]<smallest){
//             secondsm = smallest;
//             smallest = arr[i];
//         }
//         else if (arr[i]<secondsm && secondsm!=smallest){
//             secondsm = arr[i];
//         }
//     }
//     return secondsm;
// }

// int secondLargest (int arr[], int n){
//     int largest = arr[0];
//         int second = -1;
//         for(int i = 1 ;i<n; i++){
//             if(arr[i]>largest){
//                 second = largest;
//                 largest = arr[i];
//             }
//             else if (arr[i]<largest && second<arr[i]){
//                 second = arr[i];
//             }
           
//         }
//         return second;
// }
// int main (){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n ;i++){
//         cin>>arr[i];
//     }
//     cout<<"2nd Largest element is "<<secondLargest(arr,n); 
//     cout<<endl<<"2nd Smallest element is "<<secondSmallest(arr,n); 

// }



// UNIQUE 

// // #include<iostream>
// // using namespace std;

// // int unique(int arr[], int n){
// //     int ans = 0 ;

// //     for(int i = 0; i<n; i++){

// //         ans = arr[i]^ans;

// //     }
// //     return ans;

// // }

// // int main(){

// //     int prateek[7]= {1,3,1,3,4,5,4};
// //     int ans = unique(prateek,7);
// //     cout<<ans;
// // }

// // INTERSECTION OF AN ARRAY ****

// #include<iostream>
// using namespace std;

// int intersection(int arr[], int brr[], int n, int m){

//     for(int i = 0; i<n ; i++){
//         int index = arr[i];
//         for(int j = 0; j < m ; j++){

//             if(brr[j ] == index){
//                 cout<<index<<" ";
//                 brr[j ]= INT16_MIN;
//                 break;
//             }
//         }
//     }

// }

// int main(){
//     int prateek [5] = {1,2,3,4,5};
//     int amishaaaa [4]={1,2,2,4};
//     intersection(prateek, amishaaaa, 5,4);

// }

// PAIRSUM OF AN ARRAY***

// SORT 0 & 1

// #include<iostream>
// using namespace std;

// void print(int arr[],int n){
//     for(int i = 0; i<n ;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int sort(int arr[], int size){
    
//     int start = 0, end = size - 1;
//     while(start<end){

//         if(arr[start]==0){
//             start++;
//         }
//         else if(arr[end ]==1){
//             end --;
//         }
//         else{
//             swap(arr[start],arr[end]);
//             start++;
//             end--;
//         }
//     } 
// }

// int main(){
//     int prateek [ 5] = {1,1,0,1,0,};
//     sort(prateek , 5);
//     print(prateek,5);
// }

// REVERSE AN ARRAY AFTER A PARTICULAR INDEX

// #include<iostream>
// using namespace std;

// void reverse (int arr[],int n,int s){
//     int e = n-1;
//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
// }
// int main (){

//     int n;
//     cout<<"Enter the value of index after which you need to reverse the array -> ";
//     cin>>n;
//     int arr[6]={1,2,3,4,5,6};
//     reverse(arr,6,n+1);
//     for(int i = 0 ; i<6; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// MERGE AND SORTED ARRAY.. (USING 3rd ARRAY)

// #include<iostream>
// using namespace std;

// void MergeSorted(int arr1[],int arr2[],int arr3[],int n , int m){

//     int j = 0;
//     int i = 0,k = 0;
// while(i<n && j<m){
   
//     if(arr1[i]<arr2[j]){
//         arr3[k]=arr1[i];
//         i++; 
//         k++;
//     }
//     else{
//         arr3[k]=arr2[j];
//         j++;
//         k++;
//     }
// }

//  while(i<n){
//     arr3[k]=arr1[i];
//     i++;
//     k++;
//  } 
//  while(j<m){
//     arr3[k]=arr2[j];
//     j++;
//     k++;
//  }
// }

// void print (int arr[],int n){
//     for(int i = 0 ;i<n ;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// int main (){

//     int arr1[]={1,3,5,7,9};
//     int arr2[]={2,4,6,8};
//     int arr3[9];
//     MergeSorted(arr1,arr2,arr3,5,4);
//     print(arr3,9);
    
// }


// MERGE AND SORTED ARRAY WITHOUT USING 3RD ARRAY... WILL TRY IT LATER..................

// #include<iostream>
// using namespace std;

// void MergeSorted (int arr1[],int n, int arr2[], int m){

//     int k = 3;
//     int i = 0, j = 0;  
    
//     while(i<n && j<m){

//         if(arr1[i]<arr2[j]){
//             i++;
//         }
//         else if (arr1[i]>arr2[j]){
//             arr1[k]=arr1[i];
//             k++;
//             arr1[i]=arr2[j];
//             j++;
//         }

//     }


// }

// void print(int arr[],int n){
//     for(int i = 0  ;i< n; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main (){

//     int arr1[6]={1,2,3,0,0,0};
//     int arr2[3]={2,5,6};
//     MergeSorted(arr1,6,arr2,3);
//     print(arr1,6);

//     }



// MOVES THE ZEROES

// #include<iostream>
// using namespace std;

// void MoveZeroes (int arr[],int n){
//     int s = 0, e = s+1;
    
//     while(e<n){
//         if(arr[s]==0 && arr[e]!=0){
            
//             swap(arr[s],arr[e]);
//             s++;
//             e++;
//         }
//         else{
//             e++;
//         }
//     }
// }


// ANOTHER METHHOD..

// void MoveZeroes(int arr[],int n){
//     int i = 0  ;
//     for(int j = 0; j<n; j++){
//         if(arr[j]!=0){
//             swap(arr[j],arr[i]);
//             i++;
//         }
//     }
// }
// void print (int arr[],int n){
//     for(int i = 0  ;i<n ;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main (){
//     int arr[5]={0,78,0,3,12};
//     MoveZeroes(arr,5);
//     print(arr,5);
// }



// ROTATE THE ARRAY..

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void Rotate(int arr[],int n,int m){
//          int temp[n]={0};
//          for(int i = 0 ;i<n;i++){
//             temp[i]=arr[i];
//          }
//          int s = 0; 
//          int e = m;
//         for(int i = 0 ;i<n; i++){
//                 if(e==n){
//                     e=0;
//                 }
//              arr[e]=temp[s];
//              e++;
//              s++;
//         }
// }

// ALTER

// void Rotate (int arr[],int n, int m){
//        int temp[n]={0};
//          for(int i = 0 ;i<n;i++){  // MAKING A TEMPERAORY ARRAY..
//             temp[i]=arr[i];
//          }

//          for(int i = 0 ;i<n; i++){
//             arr[(i+m)%n]=temp[i];   
//          }

// }

// int main (){
//     int arr[7] = {1,2,3,4,5,6,7};
    
//     int n;
//     cout<<"Enter the value from which you need to rotate the aray : ";
//     cin>>n;
//     Rotate(arr,7,n);

  
//     for(int i  =0 ; i<7; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// CHECK IF ARRAY IS SORTED AND AS WELL AS ROTATED..

// #include<iostream>
// using namespace std;

// bool check (int arr[],int n){
//     int count = 0;
//     for(int i = 0 ; i<n ; i++){
//         if(arr[i]>arr[i+1]){
//             count++;
//         }

      
//     }
    
//         if(arr[0]<arr[n-1]){
//             count++;
//         }
//     return count <= 1;  // USING <= CUZ ARRAY MIGHT BE OF SAME ELEMENT LIKE arr[3]={1,1,1};

// }

// int main (){
//     int arr[7]={3,4,5,6,0,1,2};
//     int ans = check(arr,7);
//     cout<<ans<<endl;
// }


//  SUM OF 2 ARAYS..


// #include<iostream>
// #include<vector>
// using  namespace std;

// vector<int>reverse(vector<int>v){
//     int s = 0 ; 
//     int e = v.size()-1;

//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
  
//     return v;
// }

// vector<int> sum (int arr[],int brr[],int n , int m){
//     vector<int>v;
//     int i = n-1;
//     int j = m-1;
//     int carry = 0;
//     int sum = 0;
//     while(i >= 0  &&  j >= 0 ){
        
//         int val1 = arr[i];
//         int val2 = brr[j];
        
//         sum = val1+val2+carry;
//         carry = sum/10;
//         int value = sum%10;
//         v.push_back(value);
//         i--;
//         j--;

//     }

//     // if 1st array is big

//     while(i>=0){
//         sum = arr[i]+carry;
//         carry = sum/10;
//         int value = sum%10;
//         v.push_back(value);
//         i--;
//     }

//     // if 2nd array is big

//     while(j>=0){
//         sum = brr[j]+carry;
//         carry = sum/10;
//         int value = sum%10;
//         j--;
//         v.push_back(value);
//     }

//     // if carry is extra.
//     while(carry !=0){
//         sum = carry;
//         carry = sum/10;
//         int value = sum%10;
//         v.push_back(value);
//     }

    
//     return reverse(v);
// }

// int main (){
//     int arr1[5]={1,9,3,5,6};
//     int arr2[3]={9,9,9};
//     vector<int> ans = sum(arr1,arr2,5,3);
//     for(int i:ans){
//         cout<<i<<" ";
//     }
    
// }

// SORT 0,1,2

// #include<bits/stdc++.h>
// using namespace std;

// void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int count0 = 0;
//         for(int i = 0; i<n; i++){
//             if(nums[i]==0)
//             count0++;
//         }
//         int i = 0, j = n-1, k = count0;

//         while(i<=k && k<=j){
//              if(i<=k && k<=j && nums[i]==0) i++;
//              if(i<=k && k<=j && nums[j]==2) j--;
//              if(i<=k && k<=j && nums[k]==1) k++;

//             if(i<=k && k<=j && nums[i]==2 && nums[j]==0){
//                 swap(nums[i],nums[j]);
//                 i++;j--;
//             }
//             if(i<=k && k<=j && nums[i]==1 && nums[k]==0){
//                 swap(nums[i],nums[k]);
//                 i++;k++;
//             }
//             if(i<=k && k<=j && nums[i]==2 && nums[k]==0){
//                 swap(nums[i],nums[k]);
//                 i++;
//             }
//             if(i<=k && k<=j && nums[i]==1 && nums[j]==0){
//                 swap(nums[i],nums[j]);
//                 i++;
//             }
//             if(nums[j]==1 && nums[k]==2 && i<=k && k<=j){
//                 swap(nums[j],nums[k]);
//                 j--;k++;
//             }
           
//         }
//     }

// int main (){
//     int n;
//     cin>>n;
//     vector<int>nums(n);
//     for(int i = 0; i<n; i++){
//         cin>>nums[i];
//     }
//     sortColors(nums);

// }