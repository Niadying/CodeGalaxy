#include<iostream>
using namespace std;

void bubble(int arr[], int a){
    for(int i=0; i<a-1; i++){
        for(int j =0 ; j<a-1-i; j++){
            if (arr[j]>arr[j+1]){

                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }



    }

    for(int i =0; i<a; i++){
        cout<<arr[i]<<" ";
    }
}

int main (){
    cout <<"enter the number of the elements in the array: ";
    int N;
    cin>>N;
    int arr[N];

    for(int i =0; i<N; i++){
        cin>>arr[i];
    }
    

    bubble(arr,N);

}
