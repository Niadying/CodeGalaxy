#include <iostream>
using namespace std;

void linear(int i, int n){
    if (i > n) return;
    cout << i << "\n";
    i++;
    linear(i, n);
}

int main(){
    int n;
    cin >> n;

    linear(1, n);

    return 0;

}