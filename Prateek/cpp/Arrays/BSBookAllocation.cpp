
//BOOK ALLOCATION PROBLEM***********    

// #include<iostream>
// using namespace std;

// bool IsPossibel(int arr[],int m,  int mid, int n){

//     int PageSum = 0;
//     int student = 1; 
//     for(int i = 0; i<n; i++){
//     if(PageSum + arr[i]<=mid){
//         PageSum += arr[i];
//     }

//     else{
//         student++;
//         if(arr[i]>mid  ||  student > m){
//             return false;
//         }
//         else{
//             PageSum = arr[i];
//         }
//     }

// }
// return true;
// }

// int allocate (int arr[],int m,int e,int n){
//     int ans = -1;
//     int s = 0; 
//     while(s<=e){
//         int mid = s + (e-s)/2;

//         if(IsPossibel(arr,m,mid,n)){
//             ans  = mid;
//             e = mid -1;
//         }
//         else{
//             s = mid + 1;
//         }
      

//     }
//     return ans ;

// }

// int main (){

//     int arr[100];
//     int student,book;
//     cin>>student>>book;
//     for(int i = 0; i<book; i++){
//         cin>>arr[i];
//     }
//     int sum = 0;
//     for(int i = 0; i<book; i++){
//         sum = sum + arr[i];
//     }

//     int final = allocate(arr,student,sum,book);
//     cout<<final<<endl;

//         }


//PAINTERS PROBLEM*******

// #include<iostream>
// using namespace std;

// bool IsPossible(int arr[],int mid ,int n, int k){
//     int size = 0;
//     int painter = 1;

//     for(int i = 0; i<n; i++){

//         if(size + arr[i]<=mid){
//             size +=arr[i];
//         }
//         else {

//             painter++;
//             if(painter>k || arr[i]>mid){
//                 return false;
//             }
//             else{
//                 size = arr[i];
//             }

//         }

//     }
//     return true;

// }

// int allocate (int n,int e , int arr[],int k){
//     int s  = 0;
//     int ans = -1;
//     while(s<=e){
//         int mid  =  s+(e-s)/2;
//         if(IsPossible(arr,mid,n,k)){
//             ans = mid;
//             e = mid - 1;
//         }

//         else {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }


// int main (){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i = 0 ; i<n ;i++){
//          cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     int sum = 0;
//     for(int  i = 0; i<n ; i++){
//         sum  += arr[i];
//     }
//     int ans = allocate(n,sum,arr,k);
//     cout<<ans<<endl;


// }


// AGGRESIVE COWS PROBLEM (CONTINUE IT LATER )

#include<iostream>
using namespace std;

int main (){



}