#include<iostream>
using namespace std;

void print2(int a){

    for (int i=1; i<=a; i++){
        for (int j = 1; j<=i; j++){
            cout << "* ";
        }
        cout<<endl;
    }

}

void print3(int a){
     for (int i=1; i<=a; i++){
        for (int j = 1; j<=i; j++){
            cout << j<<" ";
        }
        cout<<endl;
    }
}

void print4(int a){
     for (int i=1; i<=a; i++){
        for (int j = 1; j<=i; j++){
            cout << i<<" ";
        }
        cout<<endl;
    }
}

void print5(int a){
     for (int i=a; i>0; i--){
        for (int j = 1; j<=i; j++){
            cout << "* ";
        }
        cout<<endl;
    }
}

int main (){
    int dig=7;
    print2(dig);
    print3(dig);
    print4(dig);
    print5(dig);
}