//armstring number
#include<iostream>
using namespace std;

int AN(int a){
    int temp=0;
    for(int i=0; a>0; i++){
        int LD= a%10;
        temp=temp+ LD*LD*LD;
        a=a/10;

    }
    return temp;
}

int main(){
    int NUM;
    cin>>NUM;
    
    int anum=AN(NUM);
    cout<<AN(44);
    
    if(anum==NUM){
        cout<<"yes";

    }
    else{
        cout<<"noi";
        
    }

}