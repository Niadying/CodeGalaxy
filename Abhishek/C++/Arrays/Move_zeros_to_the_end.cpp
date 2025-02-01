#include<iostream>
using namespace std;

void zero(int arr[],int a){
    for(int i=a-1;i>=0;i--){
        if(arr[i]==0){
            for(int j=i;j<a-1;j++){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<a;i++){
        cout<<arr[i];
    }
}
int main(){int a;
    
    cout<<"Enter the numberof the elements: "<<endl;
    cin>>a;
    int arr[a];
    cout<<"Enter the elements: ";
    for (int i=0; i<a;i++){
        cin>>arr[i];
    }
    zero(arr,a);
}