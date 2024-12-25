// #include<iostream>
// using namespace std; 

//     int update (int arr [], int n){

//         cout<<"INSIDE THE FUNCTION : ";

//         arr [1]= {545};
//         for(int i = 0; i< n; i++){
//             cout<<arr[i]<< " ";
//         }

//         cout<<"BACK TO MAIN FUNCTION : ";
//     }

//     int main(){
//     int arr[3] = {3,4,5};
//     update(arr, 3);

//     for(int i = 0 ; i<3; i++){

//         cout<<arr[i];
//     }

//     return 0;
// }


// SUM OF INDEX OF ARRAY****
#include<iostream>
using namespace std;

int main(){

    int array [10000];
    int size; 
    cout<<"Enter the size of array : ";
    cin>>size; 

    for(int i = 0; i<size; i++){

        cin>>array[i];
        
    }

    int sum = 0; 

    for(int i = 0; i<size; i++){

        sum = sum + array[i];
    }

    cout<<"The sum of index of array is : "<<sum;

}