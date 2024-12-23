#include<iostream>
using namespace std;

void printArray(int prateek[], int  size){

    for(int i = 0; i<size; i++){

        cout<<prateek[i]<<" ";
    }
}


int main(){

    // INITIALISING AN ARRAY****

    int array [6] = {5,6,7,8,9,10};

    // ACCESING THE VLAUE****
    
    cout<<"The value of 4 index of array is : "<<array[4]; 

    // FILLING SAME VALUE IN ALL INDEX OF AN ARRAY***

    int arr[56];

    fill_n(arr, 56, 5);

    for(int i = 1; i<=56; i++){

        cout<<arr[i]<<endl;
    }

// FILLING LESS VALUES IN INDEX***

int ps[6]={1,45};
int n = 6;
for(int i = 0; i<n; i++){

    cout<<ps[i]<<" ";
}

// ARRAY WITH FUNCTION ***

int tas[6]={4,5,5,67,674,45};
int p = 6;

printArray(tas, p);

// CAN INITIALISE DIFFERENT TYPE OF ARRAY LIKE :-
char sahu [5]={'a','f', 's'};
for(int i = 0; i<5; i++){

    cout<<sahu[i]<<" ";
}





}