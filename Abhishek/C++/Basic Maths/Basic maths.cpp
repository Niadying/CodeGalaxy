#include <iostream>
using namespace std;

// count digits

int count_digit(int a){
    
    int count=0;
    while(a>0){
        count++;
        a=a/10;
    }
    return count;
}

//to reverse a number 
int rev_num(int a){
    int revnum=0;
    int lastdigit;

    while(a>0){
        lastdigit= a%10;
        revnum=revnum*10+lastdigit;
        a=a/10;
    }
    cout<< revnum;
    return 0;
}






int main(){
    count_digit(234);
    rev_num(1234);

}