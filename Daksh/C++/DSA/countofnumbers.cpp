#include <iostream>
using namespace std;

int countofnum(int n){
    int count = 0;
    while (n > 0){
        int lastdigit = n % 10;
        count = count + 1;
        n = n / 10;
    }
    cout << count;
}

int main(){

    int n;
    int count;
    cin >> n;

    countofnum(n);

    return 0;

}