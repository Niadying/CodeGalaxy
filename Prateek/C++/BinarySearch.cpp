#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n , int key){

    int start = 0, end = n - 1;

    for(int i = 0 ; i<n ; i++){

        int mid = (start + end)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

    } 
    return -1;
}

int main(){

    int prateek[5]={1,2,3,4,5}; 
    int index = BinarySearch(prateek, 5, 4);
    cout<<index;
}