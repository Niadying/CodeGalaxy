#include<iostream>
using namespace std;





int large(int arr[], int a ){
    int temp=0;
    for (int j=0; j<a; j++){
        if(arr[j]>temp){
        temp=arr[j];
        }
    }
    return temp;
    
}
int main(){
    int a;
    cin>>a;
    int arr[a];

    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    cout<<large(arr, a);
}