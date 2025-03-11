#include <iostream>
using namespace std;

void linear(int n){
    if (n <= 0) return;
    cout << n << "\n";
    n--;
    linear(n);
}

int main(){
    int n;
    cin >> n;

    linear(n);

    return 0;

}