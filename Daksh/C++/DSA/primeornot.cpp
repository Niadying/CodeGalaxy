#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "not prime" << endl;
        return 0;
    }

    int facount = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            facount++;
            if ((n / i) != i) {
                facount++;
            }
        }
    }

    if (facount == 2) {
        cout << "prime" << endl;
    } else {
        cout << "not prime" << endl;
    }

    return 0;
}
