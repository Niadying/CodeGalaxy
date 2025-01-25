#include<iostream>
using namespace std;

void print_name(int n,int c){
    cout<<"name"<<endl;
    c++;
    if(c<n){
        print_name(n,c);
    }
    else{
        return;
    }
}

int main(){
    print_name(6,0);
}