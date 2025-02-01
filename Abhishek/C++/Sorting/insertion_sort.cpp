#include <iostream>
using namespace std;

void insert(int arr[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=i+1 ; j>0; j--){

            if (arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }

        }
    }
    for (int a=0; a<n; a++){
        cout<<arr[a]<<" ";
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
    

    insert(arr,N);
return 0;
}
