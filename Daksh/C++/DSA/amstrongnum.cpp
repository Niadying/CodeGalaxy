#include <iostream>
using namespace std;

int amstrongnum(int n){
    
    int strong = 0;
    while (n > 0){
        int lastdigit = n % 10;
        int cube = lastdigit*lastdigit*lastdigit;
        strong = strong + cube;
        n = n / 10;

    }
    cout << strong;
}

int main(){

    int n;
    int count;
    cin >> n;

    amstrongnum(n);

    return 0;

}