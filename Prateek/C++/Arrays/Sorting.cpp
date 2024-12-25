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


// INSERTION SORT 

// #include<iostream>
// using namespace std;

// int main (){

//     int arr[5]={5,900,34,223,6}; 
    
//     for(int i = 1; i<5; i++){
//         int index = arr[i];
//         int j = i-1;
//         while(j>=0){
//             if(arr[j]>index){
//             arr[j+1] = arr[j];
//         }
//         else{
//             break;
//         }
//         j--;
//     }
        
//         arr[j+1]=index;
//     } 

//     for(int i = 0 ;i<5;i++){
//         cout<<arr[i]<<" ";
//     }

// }

