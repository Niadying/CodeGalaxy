#include <iostream>
using namespace std;

int checkingpalindrome(int n){
    int og = 0;
    og = n;
    int reverse = 0;
    while (n > 0){
        int lastdigit = n % 10;
        reverse = (reverse*10) + lastdigit;
        n = n / 10;
    }
    if(reverse == og){
        cout << "It is a Palindrome";
    }
    else{
        cout << "It is not a Palindrome";
    }
}

int main(){

    int n;
    int count;
    cin >> n;

    checkingpalindrome(n);

    return 0;

}