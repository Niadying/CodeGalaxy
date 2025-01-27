#include<iostream>
using namespace std;

int SUM(int n){
    if (n==0){
        return 0;
    }
    int sum = n+ SUM(n-1);
    return sum;

}

//this is the second approach 

int sum(int n, int sUm){
    sUm=n+sUm;
    n--;
    if(n<0){
        return sUm;
    }
    sum(n-1,sUm);

}

int main (){
    int A;

    cin>>A;
    cout<<SUM(A);

    sum(3646, 0);
}

//maybee not workin check this one before 