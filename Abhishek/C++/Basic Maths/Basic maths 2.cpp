//check if a number is palindrome 
//check if a number is palindrome 
#include <iostream>
using namespace std;

int rev_num(int a){
    int revnum=0;
    int lastdigit;

    while(a>0){
        lastdigit= a%10;
        revnum=revnum*10+lastdigit;
        a=a/10;
    }
    return revnum;
}


int main(){
    int A;
    cin>>A;
    int rev=rev_num(A);

    if (A=rev){
        cout<<"yes it is a palindrome";
        
    }
    else{
        cout<<"no";
    }
    cout<<rev;

}