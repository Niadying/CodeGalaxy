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

#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i = 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}
int sort(int arr[], int size){
    
    int start = 0, end = size - 1;
    while(start<end){

        if(arr[start]==0){
            start++;
        }
        else if(arr[end ]==1){
            end --;
        }
        else{
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    } 
}

int main(){
    int prateek [ 5] = {1,1,0,1,0,};
    sort(prateek , 5);
    print(prateek,5);
}