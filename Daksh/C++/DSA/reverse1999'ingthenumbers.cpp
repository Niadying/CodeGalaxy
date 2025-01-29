#include <iostream>
using namespace std;

int reverse1999(int n){
    int reverse = 0;
    while (n > 0){
        int lastdigit = n % 10;
        reverse = (reverse*10) + lastdigit;
        n = n / 10;
    }
    cout << reverse;
}

int main(){

    int n;
    int count;
    cin >> n;

    reverse1999(n);

    return 0;

}