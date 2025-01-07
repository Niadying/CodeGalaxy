#include<iostream>
#include<vector>

using namespace std;

//BY 1 PLACE!!!

// int main()
// {   int n;
//     cout <<"enter no. of elements :  ";
//     cin>>n;

//     vector<int> arr(n);

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int temp = arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
     
//      arr[n-1]=temp;

//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
       
//     }

//BY K PLACES!!!


void leftRotate(int arr[], int n, int k){
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);


}

int main(){
     int n;
     cout <<"enter no. of elements :  ";
     cin>>n;

     int arr[n];

     for(int i=0;i<n;i++){
     cin>>arr[i];
     }

     int k;
     cin>>k;

     leftRotate(arr,n,k);

    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
       
    }





}







