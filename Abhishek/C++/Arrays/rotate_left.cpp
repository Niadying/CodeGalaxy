#include<iostream>
using namespace std;
//(array,index,number of rotations)
void rotate(int arr[],int a,int b){
    for(int i=0;i<=b; i++){
        int temp=arr[a-1];
        int j=a-1;
        while(j>0){
            arr[j]=arr[j-1];
            j--;
        }
        arr[0]=temp;
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int a,b;
    cout<<"enter the numberof the elements"<<endl;
    cin>>a;

    cout<<"Enter the number of rotations you want to perform"<<endl;
    cin>>b;

    cout<<"enter the elements"<<endl;
    int arr[a];
    for(int i=0;i<a; i++){
        cin>>arr[i];
    }
    rotate(arr,a,b);
}