#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
    int n;
    cout << "Enter the position (n) to find the nth Fibonacci number: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}