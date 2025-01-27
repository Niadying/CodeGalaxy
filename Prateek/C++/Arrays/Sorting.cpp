// SELECTION SORT 

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={5,4,6,8,2};

//     for(int i = 0 ; i<4; i++){
//         int MiniIndex = i;

//         for(int j  = i+1  ;j<5; j++){

//             if(arr[j]<arr[MiniIndex]){
//                 MiniIndex = j;
//             }

//             swap(arr[i],arr[MiniIndex]);
//         }
//     }
    
//     for(int i = 0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// BUBBLE SORT 

// #include<iostream>
// using namespace std;

// int main (){

//     int arr[5]={5,4,6,8,2};
//     int n;
//     cin>>n;
//     for(int i = 0 ;i<n-1; i++){

//         bool swapped = false;

//         for(int j = 0; j<n-i-1; j++){

//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped = true;
//             }

//         }
//         if (swapped == false){
//             break;
//         }

//     }

//     for(int i  = 0 ;i<5; i++){
//         cout<<arr[i]<<" ";
//     }

// }


// INSERTATION SORT 

// #include<bits/stdc++.h>
// using namespace std;

// int main (){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ;i<n; i++){
//         cin>>arr[n];
//     }

//     for(int i = 0; i<n; i++){
//         int j = i;
//         while(j>0 && arr[j-1]>arr[j]){
//             swap(arr[j-1],arr[j]);
//             j--;
//         }
//     }

//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }



// MERGE SORT 


// #include<bits/stdc++.h>
// using namespace std;

// void merg(vector<int>&arr, int low , int high , int mid ){
//     vector<int>temp;
//     int left = low;
//     int right = mid+1;

//     while(left<= mid && right<=high){
//         if(arr[left]<arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else {
//             temp.push_back(arr[right]);
//             right++;
//         }   
//     }

//     while(left<=mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for(int i = low; i<=high; i++){
//         arr[i]=temp[i-low];
//     }

// }
// void mergesort(vector<int>&arr, int low, int high){
//     if(high<=low) return ;
//     int mid = (low+high)/2;
//     mergesort(arr,low,mid);
//     mergesort(arr,mid+1,high);
//     merg(arr,low,high,mid);
// }

// int main (){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }
//     mergesort(arr,0,n-1);
//     for(int i = 0; i<n ;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// QUICK SORT 

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){

    int pivot = arr[low];
        int i  = low;
        int j = high;
        while(i<j){
        
            while(arr[i] <= pivot && i<high){
                i++;
            }
            while(arr[j] > pivot && j>low){
                j--;
            }
            if(i<j)
            swap(arr[i],arr[j]);
            
        }
        swap(arr[j],arr[low]);
        return j;

}

void qs(int arr[], int low, int high){

    if(low<high){
    int partitionIndex = partition(arr,low,high);
    qs(arr,low,partitionIndex-1);
    qs(arr,partitionIndex+1,high);

    }
}


int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ;i++){
        cin>>arr[i];
    }
    qs(arr,0,n-1);
     for(int i = 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}