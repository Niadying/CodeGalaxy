#include<iostream>
using namespace std; 

    int Max(int num[], int size){

        int maxi = INT8_MIN;

        for(int i = 0 ; i<size ; i++ ){

            maxi = max(maxi , num[i]);

            // if(num[i]>max){

            //     max = num[i];
            // }

        }
        return maxi;
    }

        int min(int num[], int size){

        int mini = INT8_MAX;

        for(int i = 0 ; i<size ; i++ ){

            mini = min(mini, num[i]);
            // if(num[i]<min){

            //     min = num[i];
            // }

        }
        return  mini;
    }

    int main(){
    
    int size ; 
    cout<<"Enter the size of array ";
    cin>>size;

    int num[300];

        // TAKING I/P IN ARRAY
        for(int i = 0 ; i<size; i++){
            
            cin>>num[i];
    }
    cout<<"Maximum value is : "<<Max(num , size)<<endl;
    cout<<"Minimum value is : "<<min(num , size);

    return 0;
}