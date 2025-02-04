// pribnt all the divisors
#include<iostream>
using namespace std;

void divisor(int a){
    cout<<"the divisors of "<< a <<" are: ";

    for(int i=1; i<=a; i++){
        if(a % i==0){
            cout<<i<<" ";

        }
    } 
}

int main(){
    divisor(36);
}
