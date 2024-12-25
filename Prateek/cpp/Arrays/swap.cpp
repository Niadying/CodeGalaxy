#include<iostream>
using namespace std;

int main (){

    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12}; 
    int n;
    cin>>n;

    int start = 0;
    int end = 11;
    
    for(int i = 0 ; i < 11 ; i++){

        int mid = (start + end) - (start + end)/2;

        if(arr[mid] == n ){
            cout<<"Position of "<<n<<" is  "<<mid<<endl;
            break;
        }

        else if (arr[mid]>n){
            end = mid--;
        }
        else {
            start = mid ++;
        }


    }

}