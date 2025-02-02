#include<iostream>
using namespace std;

void check (int arr[],int a){
    for (int i=0 ; i<a-1; i++){
        if(arr[i]>arr[i+1]){
            cout<<"the array is not sorted"<<endl;
            break;
        } 
        else{
            cout<<"the arrays is sorted"<<endl;
        }
    }
    
}
int main (){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a; i++ ){
        cin>>arr[i];
    }
    check(arr,a);
}