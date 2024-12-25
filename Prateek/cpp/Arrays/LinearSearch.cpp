//  LINEAR SEARCH******

// #include<iostream>
// using namespace std;

// bool search(int arr[],int n, int key){

//     for(int  i = 0; i<n ; i++){

//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;

// }

// int main(){
//     int prateek[4]={1,2,3,4};

//     if(search(prateek,4,3)){
//         cout<<"Present";
//     }
//     else{
//         cout<<"Absent";
//     }

// }

// SWAPPING ARRAY*****
#include<iostream>
using namespace std;

int swap(int arr[], int size){

    int start = 0; 
    int end = size - 1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int prateek[5]={1,2,3,4,5};
    swap(prateek, 5);
    print(prateek, 5);
}