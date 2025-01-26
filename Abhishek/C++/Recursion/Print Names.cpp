#include<iostream>
using namespace std;

void printname(int c , int n){
    cout<<"name"<<endl;
    c++;
    if(c<n){
        printname(c,n);

    }


}

int main(){
    printname(1,7);
}
