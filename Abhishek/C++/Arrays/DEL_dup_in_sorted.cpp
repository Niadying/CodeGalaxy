#include<iostream>
using namespace std;

void deldup (int arr[],int a){
    for (int i=0 ; i<a-1; i++){
        if(arr[i]==arr[i+1]){
            int j=i;
            while(j<a){
                arr[j]=arr[j+1];
                j++;
                
            }
            a--;
        } 
        
    }
    for(int i=0;i<a;i++ ){
        cout<<arr[i]<<" ";
    }
    
}
int main (){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a; i++ ){
        cin>>arr[i];
    }
    deldup(arr,a);
}