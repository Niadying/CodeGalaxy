#include<iostream>
using namespace std;

int large(int arr[], int a ){
    int temp=0;
    for (int j=0; j<a; j++){
        if(arr[j]>arr[temp]){
        temp=j;
        }
    }
    return temp;
    
}

int second(int arr[], int a){
    int temp=large(arr,a);
    int temp2=-1;
    for (int j=0; j<a; j++){
        if(j==temp){
            continue;
        }
        if(arr[j]>temp2){
            temp2=arr[j];
        }   
    }
    return temp2;
}
int main(){
    int a;
    cin>>a;
    int arr[a];

    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    cout<<second(arr, a);
}