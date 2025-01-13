// #include<iostream>
// using namespace std;

// bool isPresent(int arr[][4],int search, int row, int col){

//     for(int i = 0; i<row; i++){
//         for(int j = 0; j<col ;j++){
//             if(arr[i][j]==search){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// // ROW WISE SUM

// void rowsum (int arr[][4],int n){
//     // cout<<"Row wise sum -> ";
//     int temp = 0;
//     int rowindex = 0;
    
//     for(int i = 0; i<n; i++){
//         int sum = 0;
//         for(int j = 0; j<4; j++){
//             sum += arr[i][j];
//         }
//         if(sum>temp){
//             temp = sum;
//             rowindex = i;
//         }
//         // cout<<sum;
//     }
//         cout<<"Maximum sum of row is : "<<temp<<" at row index "<<rowindex<<endl;
// }

// // COLOMN WISE SUM

// void colsum (int arr[][4], int n){
//     cout<<"Col wise sum -> ";
//     for(int col = 0; col<4; col++){
//         int sum = 0;
//         for(int row = 0; row<n; row++){
//             sum+=arr[row][col];
//         }
//         cout<<sum<<" ";
//     }
//     cout<<endl;
// }

// int main (){
//     int arr[3][4]; // creating a 2d array
//     // int arr[3][4]={{1,11,111,1111} /*Pehli row*/ ,{2,22,222,2222}/*2nd row*/,{3,33,333,3333}/*3rd row*/};

//     // input --> row wise
    
//     for(int row = 0; row<3; row++){
//         for(int col = 0; col<4; col++){
//             cin>>arr[row][col];
//         }
//     }
    

//    // input --> coloumn wise
// //    for(int col = 0; col<4; col++){
// //         for(int row = 0; row<3; row++){
// //             cin>>arr[row][col];
// //         }
// //     }

//     // output
//     for(int row = 0; row<3; row++){
//         for(int col = 0; col<4; col++){
//             cout<<arr[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     // cout<<"Enter the element to search : ";
//     // int target;
//     // cin>>target;

//     // if(isPresent(arr,target,3,4)){
//     //     cout<<"Element is found.";
//     // }
//     // else{
//     //     cout<<"Element isn't found";
//     // }

//     rowsum(arr,3);
//     colsum(arr,3);

    
// }

// WAVE PRINT

// #include<iostream>
// using namespace std;

// int main (){
//     int arr[3][3]={{3,4,11},{2,12,1},{7,8,7}};
//     int mCols = 3;
//     int nRows = 3;
//     for(int col = 0; col<mCols; col++){
//       if(col % 2 == 1){
//           for(int row = nRows - 1; row>=0; row--){
//               cout<<arr[row][col]<<" ";
//           }
//       }
//       else{
//           for(int row = 0; row<nRows; row++){
//               cout<<arr[row][col]<<" ";
//           }
//       }
//   }
// }

// SPIRAL PRINT

#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int row = 3; 
    int col = 3;
    int startRow = 0;
    int startCol = 0;
    int endRow = 2;
    int endCol = 2; 
    int total = row*col;
    int count = 0;  

    while(total > count){

        // printing 1st row
        for(int index = startCol;total > count &&  index<=endCol; index++){
            cout<<arr[startRow][index]<<" ";
            count++;
        }
        startRow++;
        
        // printing last col

        for(int index = startRow;total > count &&  index<=endRow; index++){
            cout<<arr[index][endCol]<<" ";
            count++;
        }
        endCol--;

        // printing last row

        for(int index = endCol;total > count &&  index>=startCol; index--){
            cout<<arr[endRow][index]<<" ";
            count++;
        }
        endRow--;

        // printing 1st col

        for(int index = endRow;total > count &&  index>=startRow; index--){
            cout<<arr[index][startCol]<<" ";
            count++;
        }
        startCol++;
    }

    
}