#include<iostream>
#include<vector>
using namespace std;

int main(){

    // char ch[20];
    // cin>>ch;  // AFTER TAKING I/P IF STRING REMAINS EMPTY SO A NULL CHARACTER WILL BE STORED AND IT WILL TELL THAT STRING IS OVER AND WHILE PRINTING IT WILL NOT PRINT FURTHER..
    // for(int i  = 0  ;i<20 ;i++){
    //     cout<<ch[i];
    // }

    vector<int>v;
    for(int i = 0; i<5; i++){
        cin>>v[i];
    }

    for(int i = 0; i<5 ; i++){
        cout<<v[i]<<" ";
    }

}   