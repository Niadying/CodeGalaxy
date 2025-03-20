#include<bits/stdc++.h>
using namespace std;

void Change(string &a){
    cout<<"The name before the operation in fucntion  is "<<a<<endl;
    a[0]='X';
    cout<<"The name after the operation in fucntion  is "<<a<<endl;
}

int main (){
    string a;
    cin>>a;
    cout<<"The name before the operation in main is "<<a<<endl;
    Change(a);
    cout<<"The name after the operation in main is "<<a;
}





// create  a class room with objects as length bredth and heigh give some functonas volume and area 
