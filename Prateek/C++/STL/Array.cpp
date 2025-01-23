#include<iostream>
#include<array>

using namespace std;

int main (){
    int basic [3]={1,2,3};

    array<int , 4 >arr = {1,2,3,4}; // IT IS A STL ARRAY. IT IS STATIC ARRAY, WORKS LIKE A NORMAL ARRAY MEANS WE WILL USE NORMAL ARARY INSTEAD OF THIS.

    int size = arr.size();
    cout<<size<<endl;

    for(int i = 0 ;i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<arr.at(2)<<endl; // FIND ELEMENT AT CERTAIN POSITION
    cout<<arr.empty()<<endl;  // BOOLIAN FUNCTION TELLS WHEATHER IT IS EMPTY OR NOT
    cout<<arr.front()<<endl;  // FIRST ELEMENT OF THE ARRAY
    cout<<arr.back()<<endl;  // LAST ELEMENT OF THE ARRAY
}