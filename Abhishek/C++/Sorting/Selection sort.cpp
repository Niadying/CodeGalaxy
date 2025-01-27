#include<iostream>
using namespace std;

// the first lecture of sorting 

int sort(int arr[], int a){
    for(int i = 0; i<a-1; i++){
        int min=i;
        for(int j=i;j<a;j++ ){
            if(min>arr[j]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;


    }
    
}

int main(){
    int rows[7]={12,13,56,87,99,3,6};
    sort(rows, 7);
    for(int i=0; i<7;i++){
        cout<<rows[i]<<" ";

    }

}