#include<iostream>
#include<vector>
using namespace std;

int main (){

        vector<int>arr = {1,2,3,4,54,5}; 
        // IT IS A DYNAMC ARRAY. THAT MEANS IT CAN INCREASE ITS SIZE IF THE ARRAY IF FULL. IT CREATES ANOTHES VECTOR OF DOUBLE SIZE AND COPY EVERYTHING AT IT AND OLD ONE IS DEAD..
        cout<<arr.size()<<endl;
        // arr[6]=9;
        // arr[7]=10;
        cout<<arr.size()<<endl;

}