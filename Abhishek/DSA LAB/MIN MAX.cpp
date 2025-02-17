#include<iostream>
using namespace std;

int miN(int arr[],int n){
    int a;
    a=arr[0];
    for(int i=0; i<n-1; i++){
        if(a>arr[i+1]){
            a=arr[i];
        }
        else{
            a=arr[i+1];
        }

    }
    return a;
}

int maX(int arr[],int n){
    int a;
    a=arr[0];
    for(int i=0; i<n-1; i++){
        if(a<arr[i+1]){
            a=arr[i];
        }
        else{
            a=arr[i+1];
        }

    }
    return a;
}


int main(){
    int A;
    int ARR[A];


    cout<<"Enter the number of the elememts in the array"<<endl;
    cin>>A;

    for(int i=0; i<A; i++){
        cin>>ARR[i];
    }
    int mim = miN(ARR,A);
    cout<<mim<<"  "<<maX(ARR,A);
}